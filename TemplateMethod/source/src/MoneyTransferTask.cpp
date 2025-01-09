#include "MoneyTransferTask.hpp"

#include <iostream>

using namespace std;

MoneyTransferTask::MoneyTransferTask() {}

MoneyTransferTask::MoneyTransferTask(AuditTrail* auditTrail) {}

void MoneyTransferTask::doExecute() { cout << "Transfer Money" << endl; }
