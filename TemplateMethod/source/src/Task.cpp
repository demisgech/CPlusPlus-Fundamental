#include "Task.hpp"

Task::Task() { this->auditTrail = new AuditTrail(); }

Task::Task(AuditTrail* auditTail) { this->auditTrail = auditTail; }

void Task::execute() {
  auditTrail->record();
  doExecute();
}