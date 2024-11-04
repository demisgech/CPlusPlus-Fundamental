#ifndef ITRANSACTION__HPP__
#define ITRANSACTION__HPP__

#include <string>

using namespace std;

// Interface for transactions
class ITransaction {
 public:
  virtual void excute() = 0;
  virtual string getDatails() = 0;
};
#endif