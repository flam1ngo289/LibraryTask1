#include <iostream>
#include <Windows.h>
#include <string>
#include "greeter.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Greeter greeter;
    std::string input;
    std::cout << "Введите имя: ";
    std::cin >> input;

    std::string greeting = greeter.greet(input);

    std::cout << greeting << std::endl;

    return 0;
}

