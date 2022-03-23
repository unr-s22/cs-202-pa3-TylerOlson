#include "Account.h"
#include <iostream>
#include <string>
#include <vector>

Account::Account(Money money) {
    m_balance = money;
}

/**
 * @brief deposits money to the account if the money to add is more than zero.
 * @param money
 */
void Account::makeDeposit(Money money) {
    if (money.getCents() < 0) {
        m_flag = false;
        std::cout << "Not accepted value \n";
    } else {
        m_flag = true;
        m_deposits.push_back(money);
        m_balance = m_balance + money;
        m_flag = false;
    }
}

/**
 * @brief withdraws money from the account if the money to be taken is less than the ammount of money in the account.
 * @param money
 */
void Account::makeWithdrawals(Money money) {
    if (money > m_balance) {
        m_flag = false;
        std::cout << "Not enough money \n";
    } else {
        m_flag = true;
        m_withdrawals.push_back(money);
        m_balance = m_balance - money;
        m_flag = false;
    }
}

std::ostream &operator<<(std::ostream &os, Account &account) {
    os << "Account Details" << std::endl;
    os << "-------------------------" << std::endl;
    os << "Current Balance " << account.m_balance << std::endl;
    os << "-------------------------" << std::endl;
    os << "Number of Deposits: " << account.m_deposits.size() << std::endl;
    for (int i = 0; i < account.m_deposits.size(); i++) {
        os << "(" << i + 1 << ") " << account.m_deposits[i] << std::endl;
    }
    os << "-------------------------" << std::endl;

    os << "Number of Withdrawals: " << account.m_withdrawals.size() << std::endl;
    for (int i = 0; i < account.m_withdrawals.size(); i++) {
        os << "(" << i + 1 << ") " << account.m_withdrawals[i] << std::endl;
    }
    os << "-------------------------" << std::endl;

    return os;
}