/* 
    projects/learnCPP/4-1_userInput.h

    Expected behavior:
    1. Get integer from console user input

    Jeremy@MooreCreativeArts.com
*/

#include <iostream>

int getNumFromUserInput()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;

    return num;
}
