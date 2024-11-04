#ifndef INSUFFICIENTBALANCE
#define INSUFFICIENTBALANCE

#include <stdexcept>

using namespace std;

class InsufficientBalance : public exception {
 private:
  const char* message;

 public:
  InsufficientBalance(const char* message);
  const char* what() const noexcept override;
};
#endif