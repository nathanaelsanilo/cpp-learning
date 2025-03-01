#include <iostream>
#include <string>
#include <cctype>

// using namespace std; // bring all the std functionality
using std::cout;
using std::string;

string toLowerCase(string str)
{
    string result = str;
    // for loop
    // size_t is a type for sizes/indexes
    // for (size_t i = 0; i < result.length(); i++)
    // {
    //     result[i] = std::tolower(result[i]);
    // }

    for (char &c : result)
    {
        c = tolower(c);
    }
    return result;
}

int main()
{
    std::string playerName;
    int score = 0;

    cout << "Welcome to the Space Explorer Quiz Game!" << std ::endl;
    cout << "Earthling, what is your name? ";
    getline(std::cin, playerName);

    cout << "Greetings, " << playerName << "! Let's test your space knowledge!\n"
         << std::endl;

    // Question 1
    std::string answer1;
    cout << "Question 1: Which planet is known for its giant red spot? ";
    std::getline(std::cin, answer1);

    if (answer1 == "Jupiter" || answer1 == "jupiter")
    {
        std::cout << "Correct! Jupiter's red spot is a massive storm!" << std::endl;
        score += 1;
    }
    else
    {
        std::cout << "Wrong! The answer is Jupiter." << std::endl;
    }

    // Question 2
    std::string answer2;
    std::cout << "\nQuestion 2: How many moons does Mars have? ";
    std::getline(std::cin, answer2);

    if (answer2 == "2" || answer2 == "two")
    {
        std::cout << "Correct! Mars has two moons, Phobos and Deimos!" << std::endl;
        score += 1;
    }
    else
    {
        std::cout << "Wrong! Mars has 2 moons." << std::endl;
    }

    // Question 3
    std::string answer3;
    std::cout << "\nQuestion 3: What's the closest planet to the Sun? ";
    std::getline(std::cin, answer3);

    if (answer3 == "Mercury" || answer3 == "mercury")
    {
        std::cout << "Correct! Mercury is the closest to the Sun!" << std::endl;
        score += 1;
    }
    else
    {
        std::cout << "Wrong! The answer is Mercury." << std::endl;
    }

    // Question 4
    std::string answer4;
    std::cout << "\nQuestion 4: What color is Mars often described as? ";
    std::getline(std::cin, answer4);

    if (toLowerCase(answer4) == "red")
    {
        std::cout << "Correct! Mars often described as Red!" << std::endl;
        score += 1;
    }
    else
    {
        std::cout << "Wrong! The answer is Red." << std::endl;
    }

    // Final Score
    std::cout << "\nGame Over, " << playerName << "!" << std::endl;
    std::cout << "Your score: " << score << " out of 4!" << std::endl;

    if (score == 4)
    {
        std::cout << "Galactic Genius Unlocked! You're ready for space travel!" << std::endl;
    }
    else if (score == 3)
    {
        std::cout << "Space Cadet! You're on your way to the stars!" << std::endl;
    }
    else
    {
        std::cout << "Asteroid Dodger! Keep studying the cosmos!" << std::endl;
    }

    return 0;
}