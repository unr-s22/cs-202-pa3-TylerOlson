#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class Money {
private:
    int m_cents;

public:
    Money();
    Money(int dollars, int cents);

    int getCents();

    friend std::ostream &operator<<(std::ostream &output, Money &m);
    bool operator<(const Money &m);
    bool operator>(const Money &m);
    bool operator<=(const Money &m);
    bool operator>=(const Money &m);
    bool operator!=(const Money &m);
    bool operator==(const Money &m);
    Money operator+(const Money &m);
    Money operator-(const Money &m);
};

#endif
