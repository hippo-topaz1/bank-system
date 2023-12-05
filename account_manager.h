#ifndef ACCOUNT_MANAGER_H
#define ACCOUNT_MANAGER_H

#include <vector>
#include "account.h"

class AccountManager {
private:
    std::vector<Account> accounts;

public:
    void addAccount(const Account& account);
    // Add other account management functions as needed
};

#endif // ACCOUNT_MANAGER_H
