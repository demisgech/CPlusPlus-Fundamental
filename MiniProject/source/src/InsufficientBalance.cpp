#include "InsufficientBalance.hpp"

InsufficientBalance::InsufficientBalance(const char* message)
    : message{message} {}

const char* InsufficientBalance::what() const noexcept { return message; }