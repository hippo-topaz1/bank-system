#ifndef TRANSACTION_MANAGER_H
#define TRANSACTION_MANAGER_H

#include <vector>
#include "transaction.h"

class TransactionManager {
private:
    std::vector<Transaction> transactions;

public:
    void makeTransaction(const Transaction& transaction);
    // Add other transaction management functions as needed
};

#endif // TRANSACTION_MANAGER_H
