#include <iostream>

int main() {
    char operation;
    double num1;
    double num2;
    std::cout << "Enter your calculation one character at a time" << '\n';
    std::cin >> num1;
    std::cin >> operation;
    std::cin >> num2;
    switch (operation) {
        case '+':
            std::cout << (num1 + num2);
            break;
        case '-':
            std::cout << (num1 - num2);
            break;
        case '/':
            std::cout << (num1 / num2);
            break;
        case '*':
            std::cout << (num1 * num2);
            break;
    }

    return 0;
}