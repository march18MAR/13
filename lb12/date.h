#pragma once

#include <string>

struct Date {
    int day;
    int month;
    int year;
};

void inputDate(Date& date, const std::string& prompt);
bool isValidDate(const Date& date);
int compareDates(const Date& d1, const Date& d2);
void printDate(const Date& date);