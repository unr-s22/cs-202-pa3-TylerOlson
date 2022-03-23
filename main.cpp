#include "Account.h"
#include "Money.h"

int main() {
    Account account(Money(300, 23));

    std::cout << account << std::endl;

    account.makeDeposit(Money(200, 00));
    account.makeDeposit(Money(300, 24));
    account.makeDeposit(Money(501, 22));

    std::cout << account << std::endl;

    account.makeWithdrawals(Money(300, 10));
    account.makeWithdrawals(Money(201, 34));

    std::cout << account << std::endl;

    // OPERATOR TESTING
    std::cout << "Let's test our operators:" << std::endl;
    std::cout << "--------------------------" << std::endl;

    Money test1(350, 75);
    Money test2(20, 25);
    Money test3(350, 75);
    Money test4(20, 25);

    if (test1 > test2) {
        std::cout << "Operator '>' works" << std::endl;
    };
    if (test2 < test1) {
        std::cout << "Operator '<' works" << std::endl;
    };
    if (test1 == test3) {
        std::cout << "Operator '==' works" << std::endl;
    };
    if (test1 != test2) {
        std::cout << "Operator '!=' works" << std::endl;
    };
    if (test1 >= test2) {
        std::cout << "Operator '>=' works (> part)" << std::endl;
    }
    if (test1 >= test3) {
        std::cout << "Operator '>=' works (= part)" << std::endl;
    }
    if (test2 <= test1) {
        std::cout << "Operator '<=' works (< part)" << std::endl;
    }
    if (test2 <= test4) {
        std::cout << "Operator '>=' works (= part)" << std::endl;
    }

    return 0;
}