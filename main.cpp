#include <iostream>
#include "question1.h"

int main()
{
    double c;

    while (c >= -9999999 && c <= 99999999) {
        std::cout << "Please enter celsius temperature: ";
        std:: cin >> c;

        get_fahrenheit(c);
}