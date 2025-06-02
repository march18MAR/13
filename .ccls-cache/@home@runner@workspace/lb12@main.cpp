#include <iostream>
#include "date.h"

int main() {
    Date date1, date2;

    inputDate(date1, "Enter first date (DD:MM:YY): ");
    while (!isValidDate(date1)) {
        std::cout << "Invalid date. Try again.\n";
        inputDate(date1, "Enter first date (DD:MM:YY): ");
    }

    inputDate(date2, "Enter second date (DD:MM:YY): ");
    while (!isValidDate(date2)) {
        std::cout << "Invalid date. Try again.\n";
        inputDate(date2, "Enter second date (DD:MM:YY): ");
    }

    std::cout << "\nDates in chronological order:\n";
    if (compareDates(date1, date2) <= 0) {
        printDate(date1);
        printDate(date2);
    } else {
        printDate(date2);
        printDate(date1);
    }

    return 0;
}