#include <iostream>

/*
Do while vs while
while: repeat code if and when condition is fulfilled
do while: repeat code once regardless and only repeat again if confition is fulfilled
*/

int main() {
    int num;
    do {
        std::cout << "Enter an even number: ";
        std::cin >> num;
    } while (num % 2 == 1);
}