#ifndef GENERATEREPORT__HPP
#define GENERATEREPORT__HPP
#include "AuditTrail.hpp"
#include "Task.hpp"

class GenerateReportTask : public Task {
 public:
  using Task::Task;
  GenerateReportTask();
  GenerateReportTask(AuditTrail* auditTrail);
  ~GenerateReportTask() = default;

  void doExecute() override;
};
#endif