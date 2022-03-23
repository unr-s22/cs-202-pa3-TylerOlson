#include "Money.h"
#include <iostream>

Money::Money() {
    m_cents = 0;
}

Money::Money(int dollars, int cents) {
    m_cents = dollars * 100 + cents;
}

int Money::getCents() {
    return m_cents;
}

std::ostream &operator<<(std::ostream &os, Money &money) {
    int dollars = money.m_cents / 100;
    int cents = money.m_cents % 100;
    os << "$" << dollars << "." << (cents < 10 ? "0" : "") << cents;
    return os;
}

bool Money::operator<(const Money &m) {
    return m_cents < m.m_cents;
}

bool Money::operator>(const Money &m) {
    return m_cents > m.m_cents;
}

bool Money::operator<=(const Money &m) {
    return m_cents <= m.m_cents;
}

bool Money::operator>=(const Money &m) {
    return m_cents >= m.m_cents;
}

bool Money::operator!=(const Money &m) {
    return m_cents != m.m_cents;
}

bool Money::operator==(const Money &m) {
    return m_cents == m.m_cents;
}

Money Money::operator+(const Money &m) {
    return Money(0, m_cents + m.m_cents);
}

Money Money::operator-(const Money &m) {
    return Money(0, m_cents - m.m_cents);
}
