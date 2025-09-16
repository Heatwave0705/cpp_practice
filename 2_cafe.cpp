#include <iostream>

// typedef std::string text_t;
using text_t = std::string;

int main() {
    text_t name = "bob";
    text_t food = "shawarma";
    char option = 'B';
    float price = 5.99;
    int rounded_price = 6;

    std::cout << name << " wants to buy a " << food << " which is option " << option << " of the menu, and costs exactly " << price << " or " << rounded_price << " rounded up";
}