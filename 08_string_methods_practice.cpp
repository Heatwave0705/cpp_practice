#include <iostream>

int main() {
    std::string name;
    std::string email;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    if (name.empty()) {
        std::cout << "You didn't enter your name, Try again ";
    }
    else if (name.length() > 12) {
        std::cout << "Name is too long, try again";
    }
    else if (name.length() < 3) {
        std::cout << "Name is too short, try again";
    }
    else {
        email = name;
        email.append ("@gmail.com");
        std::cout << "Hello " << name << ", your email is " << email << '\n' << "If you moved the first letter of your name to the middle of your name, your name would be ";
        name.insert(name.length()/2, std::string(1, name.at(0)));
        name.erase(0, 1);
        std::cout << name;
    }
    
    return 0;
}