#include "../include/numbers_from_string.h"
#include <iostream>

std::string numbers_from_string(const std::string& data) {
    bool chislo {false};
    std::string stroka = "";
    for (char current_char : data) {
        if (std::isdigit(current_char)) {
            stroka += current_char;
            chislo = true;
        }
        else if (chislo) {
            chislo = false;
            stroka += '\n';
        }
    }
    if (chislo) stroka += '\n';

    return stroka;
}