#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Money.h"
#include <iostream>
#include <vector>

class Account {
private:
    Money m_balance;
    bool m_flag;
    // VECTORS TO HOLD DEPOSITS AND WITHDRAWALS
    std::vector<Money> m_deposits;
    std::vector<Money> m_withdrawals;

public:
    Account(Money m);
    void makeDeposit(Money money);
    void makeWithdrawals(Money money);
    friend std::ostream &operator<<(std::ostream &output, Account &account);
};

#endif
