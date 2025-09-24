#include <iostream>

int main() {
    int passw;
    for (int i = 1; i <= 3; i++) {
        std::cin >> passw;
        if (passw == 3435) {
            break;
        }
    }
    passw != 3435 ? std::cout << "You have used your 3 attempts, try again later" : std::cout << "Correct";
}