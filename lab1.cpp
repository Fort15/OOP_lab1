#include <iostream>
#include <string>
#include "include/numbers_from_string.h"

int main() {
    std::string data;
    std::cout << "Введите строку, состоящую из цифр и букв, перемешанных между собой" << std::endl;
    std::cin >> data;

    std::cout << numbers_from_string(data);

    return 0;
}