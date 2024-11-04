#ifndef ACCOUNTLOCKED__HPP__
#define ACCOUNTLOCKED__HPP__

#include <stdexcept>

using namespace std;

class AccountLocked : public exception {
 public:
  const char* what() const noexcept override;
};
#endif