/*
    projects/learnCPP/3_add2Integers.cpp
    
    Expected behavior:
    1. Get 2 integers from console user input
    2. Print sum of 2 integers to console
    
    Jeremy@MooreCreativeArts.com
*/

#include <iostream>

int getNumFromUserInput()
{
    std::cout << "Enter an integer: ";
    int num {};
    std::cin >> num;

    return num;
}

void printSumOf2Nums(int x, int y)
{
    // sum ints
    int sum { x + y };

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