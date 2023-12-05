#ifndef BANK_H
#define BANK_H

#include "customer_manager.h"
#include "account_manager.h"
#include "transaction_manager.h"

class Bank {
private:
    CustomerManager customerManager;
    AccountManager accountManager;
    TransactionManager transactionManager;

public:
    Bank();
    void run();
};

#endif // BANK_H
