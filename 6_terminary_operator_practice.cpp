#include <iostream>

int main() {
    int age;
    int n;
    std::cout << "What is your age? ";
    std::cin >> age;
    age >= 17 ? std::cout << "You can drive a car in the UAE" << '\n': std::cout << "You can't drive a car in the UAE" << '\n';
    std::cout << "Enter a whole number: ";
    std::cin >> n;
    n % 2 == 0 ? std::cout << n << " is an even number" << '\n' : std::cout << n << " is an odd number" << '\n';
}