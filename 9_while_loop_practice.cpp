#include <iostream>

int main() {
    std::string answer;
    std::cout << "Enter anything, I will repeat what you said back to you, the program ends when you type 'quit'" << '\n';
    while (answer != "quit") {
        std::cin >> answer;
        std::cout << answer << '\n';
    }

    return 0;
}