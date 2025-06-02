#include "date.h"
#include <iostream>
#include <iomanip>
#include <sstream>

void inputDate(Date& date, const std::string& prompt) {
    std::string input;
    std::cout << prompt;
    std::cin >> input;

    std::stringstream ss(input);
    char delim;
    ss >> date.day >> delim >> date.month >> delim >> date.year;
}

bool isValidDate(const Date& date) {
    if (date.day < 1 || date.month < 1 || date.month > 12 || date.year < 0)

        return false;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };

         bool leap = (date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0);

    if (leap && date.month == 2)
        return date.day <= 29;

    return date.day <= daysInMonth[date.month - 1];
}

int compareDates(const Date& d1, const Date& d2) {
    if (d1.year != d2.year)
        return d1.year - d2.year;
    if (d1.month != d2.month)
        return d1.month - d2.month;
    return d1.day - d2.day;
}

void printDate(const Date& date) {
    std::cout << std::setw(2) << std::setfill('0') << date.day << ":"
              << std::setw(2) << std::setfill('0') << date.month << ":"
              << std::setw(2) << std::setfill('0') << date.year << std::endl;
}