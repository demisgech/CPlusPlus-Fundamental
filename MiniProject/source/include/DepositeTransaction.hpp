#ifndef DEPOSITETRANSACTION
#define DEPOSITETRANSACTION

#include "ITransaction.hpp"

class DepositeTransaction : public ITransaction {
 private:
  double amount;

 public:
  DepositeTransaction(double amount);
  void excute() override;
  string getDatails() override;
};
#endif