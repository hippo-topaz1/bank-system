#ifndef CUSTOMER_MANAGER_H
#define CUSTOMER_MANAGER_H

#include <vector>
#include "customer.h"

class CustomerManager {
private:
    std::vector<Customer> customers;

public:
    void addCustomer(const Customer& customer);
    // Add other customer management functions as needed
};

#endif // CUSTOMER_MANAGER_H
