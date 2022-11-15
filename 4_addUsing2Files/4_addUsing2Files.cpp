/* 
    projects/learnCPP/4_addUsing2Files.cpp

    Expected behavior:
    1. Get 2 integers from console user input
    2. Print sum of 2 integers to console
    
    Requirements:
    1. Separate user input logic to a separate file

    Jeremy@MooreCreativeArts.com
*/

#include <iostream>
#include "4-1_userInput.h"

void printSumOf2Nums(int x, int y)
{
    // sum ints
    int sum { x + y};

    // print sum to console
    std::cout << "The sum of " << x << " and " << y << " is " << sum << "\n";
}

int main()
{
    // get 2 ints
    int x{ getNumFromUserInput() };
    int y{ getNumFromUserInput() };

    printSumOf2Nums(x, y);

    return 0;
}