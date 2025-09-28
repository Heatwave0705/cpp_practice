#include <iostream>

int main() {
    //Multiplication (i wont learn how to format it preperly now, maybe later)
    int num;
    std::cin >> num;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            std::cout << i*j;
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    // Paterns
    /*

    *
    **
    ***
    ****
    *****

    */

    std::cin >> num;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++){
            std::cout << "*";
        }
        std::cout << '\n';
    }
}