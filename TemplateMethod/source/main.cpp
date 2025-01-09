#include <iostream>
#include <vector>

#include "GenerateReportTask.hpp"
#include "MoneyTransferTask.hpp"
#include "Task.hpp"

using namespace std;

int main() {
  vector<Task*> tasks;
  tasks.push_back(new MoneyTransferTask());
  tasks.push_back(new GenerateReportTask());

  for (auto task : tasks) {
    task->execute();
  }

  return 0;
}