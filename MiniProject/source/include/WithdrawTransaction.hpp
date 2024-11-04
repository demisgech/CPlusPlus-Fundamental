#ifndef WITHDRAWTRANSACTION
#define WITHDRAWTRANSACTION

#include "ITransaction.hpp"

class WithdrawTransaction : public ITransaction {
 private:
  double amount;

 public:
  WithdrawTransaction(double amount);
  void excute() override;
  string getDatails() override;
};

#endif  // WITHDRAWTRANSACTION
