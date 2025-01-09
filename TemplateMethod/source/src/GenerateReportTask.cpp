#include "GenerateReportTask.hpp"

#include <iostream>

using namespace std;

GenerateReportTask::GenerateReportTask() {}
GenerateReportTask::GenerateReportTask(AuditTrail* auditTrail) {}

void GenerateReportTask::doExecute() { cout << "Generate report" << endl; }
