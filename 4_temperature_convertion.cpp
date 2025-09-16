#include <iostream>

int main() {
    double c;
    double f;   
    std::string user_input;

    std::cout << "Do you want to do a) celcius -> farenheit, or b) farenheit to celsius? ";
    std::cin >> user_input;
    if (user_input == "a") {
        std::cout << "Enter temperature in celcius: ";
        std::cin >> c;
        f = (c*9/5) + 32;
        std::cout << c << "^C is equal to " << f << "^F";
    }
    else if (user_input == "b") {
        std::cout << "Enter temperature in farenheit: ";
        std::cin >> f;
        c = (f - 32) * 5/9;
        std::cout << f << "^F is equal to " << c << "^C";
    }
    else{
        std::cout << "Please enter 'a' or 'b'";
    }
}