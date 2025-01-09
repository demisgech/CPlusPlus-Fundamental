#ifndef MONEYTRASNSFERTASK__HPP
#define MONEYTRASNSFERTASK__HPP

#include "AuditTrail.hpp"
#include "Task.hpp"

class MoneyTransferTask : public Task {
 public:
  using Task::Task;
  MoneyTransferTask();
  MoneyTransferTask(AuditTrail* auditTrail);
  ~MoneyTransferTask() = default;

  void doExecute() override;
};

#endif