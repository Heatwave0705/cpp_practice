#include <iostream>

int main() {
    bool cloudy;
    bool rainy;
    cloudy = true;
    rainy = true;
    if (rainy && cloudy) {
        std::cout<< "it is stormy";
    }
    if (!cloudy) {
        std::cout << "The skys are clear";
    }
    if (cloudy || rainy) {
        std::cout << "Its clowdy and/or rainy right now";
    }
}