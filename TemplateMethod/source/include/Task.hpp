#ifndef TASK
#define TASK

#include "AuditTrail.hpp"

// Abstract base class

class Task {
 private:
  AuditTrail* auditTrail;

 public:
  Task();
  Task(AuditTrail* auditTail);
  virtual ~Task() = default;
  void execute();

 protected:
  virtual void doExecute() = 0;
};

#endif