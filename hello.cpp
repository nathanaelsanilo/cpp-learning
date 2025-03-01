#include <iostream> // give access to std::cout
#include <string>   // add support for handling text

// main entry point
int main()
{
    std::string name; // create variable
    std::string favoritePlanet;

    // << print the statement
    std::cout << "Hello, Universe! This is earth calling!" << std ::endl; // add a new line
    std::cout << "Earthling, what is your name? ";
    // getline() get input then assign to variable name
    // std::cin listens to input
    std::getline(std::cin, name);
    std::cout << "Greetings, " << name << "! You're now registered in the Galactic Database." << std::endl;
    std::cout << "Welcome to the Mothership, " << name << "!" << std::endl;
    std::cout << "What's you favorite planet? ";
    std::getline(std::cin, favoritePlanet);
    std::cout << "Your favorite planet " << favoritePlanet << " is registered!" << std::endl;

    return 0;
}