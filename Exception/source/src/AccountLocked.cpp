#include "AccountLocked.hpp"

const char* AccountLocked::what() const noexcept {
  return "Your account is locked! Contact the admin.";
}
