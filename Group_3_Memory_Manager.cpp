#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// 🔹 Constants
#define TOTAL_MEMORY_SIZE 64
#define BLOCK_SIZE 1
#define TOTAL_BLOCKS (TOTAL_MEMORY_SIZE / BLOCK_SIZE)

// 🔹 Memory Block Class
class MemoryBlock {
 public:
  bool isAllocated;
  string blockTag;
  int timeToLive;

  MemoryBlock() : isAllocated(false), blockTag(""), timeToLive(0) {}

  void allocateBlock(const string& tag, int timeToLiveValue) {
    isAllocated = true;
    blockTag = tag;
    timeToLive = timeToLiveValue;
  }

  void freeBlock() {
    isAllocated = false;
    blockTag = "";
    timeToLive = 0;
  }
};

// 🔹 Allocation Strategy Interface
class AllocationStrategy {
 public:
  virtual int findAllocationStartIndex(int blockCount,
                                       MemoryBlock memoryBlocks[]) = 0;
};

// 🔹 First Fit Allocation Strategy
class FirstFitStrategy : public AllocationStrategy {
 public:
  int findAllocationStartIndex(int blockCount,
                               MemoryBlock memoryBlocks[]) override {
    for (int i = 0; i < TOTAL_BLOCKS; ++i) {
      if (!memoryBlocks[i].isAllocated) {
        int freeCount = 0;
        for (int j = i; j < TOTAL_BLOCKS; ++j) {
          if (!memoryBlocks[j].isAllocated)
            freeCount++;
          else
            break;
          if (freeCount == blockCount) return i;
        }
      }
    }
    return -1;  // No space found
  }
};

// 🔹 Best Fit Allocation Strategy
class BestFitStrategy : public AllocationStrategy {
 public:
  int findAllocationStartIndex(int blockCount,
                               MemoryBlock memoryBlocks[]) override {
    int bestStartIndex = -1;
    int bestSize = TOTAL_BLOCKS + 1;

    for (int i = 0; i < TOTAL_BLOCKS; ++i) {
      if (!memoryBlocks[i].isAllocated) {
        int freeCount = 0;
        for (int j = i; j < TOTAL_BLOCKS; ++j) {
          if (!memoryBlocks[j].isAllocated)
            freeCount++;
          else
            break;
          if (freeCount >= blockCount && freeCount < bestSize) {
            bestStartIndex = i;
            bestSize = freeCount;
          }
        }
      }
    }
    return bestStartIndex;
  }
};

// 🔹 Worst Fit Allocation Strategy
class WorstFitStrategy : public AllocationStrategy {
 public:
  int findAllocationStartIndex(int blockCount,
                               MemoryBlock memoryBlocks[]) override {
    int worstStartIndex = -1;
    int worstSize = -1;

    for (int i = 0; i < TOTAL_BLOCKS; ++i) {
      if (!memoryBlocks[i].isAllocated) {
        int freeCount = 0;
        for (int j = i; j < TOTAL_BLOCKS; ++j) {
          if (!memoryBlocks[j].isAllocated)
            freeCount++;
          else
            break;
          if (freeCount >= blockCount && freeCount > worstSize) {
            worstStartIndex = i;
            worstSize = freeCount;
          }
        }
      }
    }
    return worstStartIndex;
  }
};

// 🔹 Singleton Memory Manager
class MemoryManager {
 private:
  MemoryBlock memoryBlocks[TOTAL_BLOCKS];
  static MemoryManager* instance;

  MemoryManager() {}  // Private Constructor

 public:
  static MemoryManager* getInstance() {
    if (!instance) instance = new MemoryManager();
    return instance;
  }

  void allocateMemory(int blockCount, const string& tag, int timeToLiveValue,
                      AllocationStrategy* strategy) {
    int startIndex =
        strategy->findAllocationStartIndex(blockCount, memoryBlocks);
    if (startIndex == -1) {
      cout << "Memory allocation failed.\n";
      return;
    }

    for (int i = startIndex; i < startIndex + blockCount; ++i)
      memoryBlocks[i].allocateBlock(tag, timeToLiveValue);

    cout << "Allocated " << blockCount << " blocks at index " << startIndex
         << ".\n";
  }

  void freeMemory(int startIndex, int blockCount) {
    if (startIndex < 0 || startIndex + blockCount > TOTAL_BLOCKS) {
      cout << "Invalid memory range.\n";
      return;
    }

    for (int i = startIndex; i < startIndex + blockCount; ++i)
      memoryBlocks[i].freeBlock();

    cout << "Freed " << blockCount << " blocks.\n";
  }

  void displayMemoryStatus() {
    for (int i = 0; i < TOTAL_BLOCKS; ++i)
      cout << (memoryBlocks[i].isAllocated ? '1' : '0');
    cout << "\n";
  }

  void defragmentMemory() {
    int writeIndex = 0;
    for (int readIndex = 0; readIndex < TOTAL_BLOCKS; ++readIndex) {
      if (memoryBlocks[readIndex].isAllocated) {
        if (writeIndex != readIndex) {
          memoryBlocks[writeIndex] = memoryBlocks[readIndex];
          memoryBlocks[readIndex].freeBlock();
        }
        writeIndex++;
      }
    }
    cout << "Memory defragmented.\n";
  }

  void saveMemoryStateToFile() {
    ofstream file("memory_state.txt");
    for (int i = 0; i < TOTAL_BLOCKS; ++i)
      file << memoryBlocks[i].isAllocated << " " << memoryBlocks[i].blockTag
           << " " << memoryBlocks[i].timeToLive << "\n";

    file.close();
    cout << "Memory saved to file.\n";
  }

  void loadMemoryStateFromFile() {
    ifstream file("memory_state.txt");
    for (int i = 0; i < TOTAL_BLOCKS; ++i)
      file >> memoryBlocks[i].isAllocated >> memoryBlocks[i].blockTag >>
          memoryBlocks[i].timeToLive;

    file.close();
    cout << "Memory loaded from file.\n";
  }
};
MemoryManager* MemoryManager::instance =
    nullptr;  // Initialize Singleton instance

// 🔹 Main Function
int main() {
  MemoryManager* memoryManager = MemoryManager::getInstance();
  AllocationStrategy* firstFit = new FirstFitStrategy();
  AllocationStrategy* bestFit = new BestFitStrategy();
  AllocationStrategy* worstFit = new WorstFitStrategy();

  int choice;
  while (true) {
    cout << "\n--- Memory Manager ---\n";
    cout << "1. Allocate Memory" << endl
         << "2. Free Memory" << endl
         << "3. View Memory" << endl
         << "4. Defragment" << endl
         << "5. Save State" << endl
         << "6. Load State" << endl
         << "7. Exit" << endl;
    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1) {
      int blockCount, timeToLiveValue, strategyChoice;
      string tag;
      cout << "Enter blocks to allocate: ";
      cin >> blockCount;
      cout << "Enter tag: ";
      cin >> tag;
      cout << "Enter Time To Live: ";
      cin >> timeToLiveValue;
      cout << "Choose strategy:" << endl
           << "1. First Fit" << endl
           << "2. Best Fit" << endl
           << "3. Worst Fit" << endl
           << "Option: ";
      cin >> strategyChoice;

      AllocationStrategy* selectedStrategy = (strategyChoice == 1)   ? firstFit
                                             : (strategyChoice == 2) ? bestFit
                                                                     : worstFit;
      memoryManager->allocateMemory(blockCount, tag, timeToLiveValue,
                                    selectedStrategy);
    } else if (choice == 2) {
      int startIndex, blockCount;
      cout << "Enter start index: ";
      cin >> startIndex;
      cout << "Enter blocks to free: ";
      cin >> blockCount;
      memoryManager->freeMemory(startIndex, blockCount);
    } else if (choice == 3) {
      memoryManager->displayMemoryStatus();
    } else if (choice == 4) {
      memoryManager->defragmentMemory();
    } else if (choice == 5) {
      memoryManager->saveMemoryStateToFile();
    } else if (choice == 6) {
      memoryManager->loadMemoryStateFromFile();
    } else if (choice == 7) {
      break;
    }
  }

  delete firstFit;
  delete bestFit;
  delete worstFit;
  return 0;
}
