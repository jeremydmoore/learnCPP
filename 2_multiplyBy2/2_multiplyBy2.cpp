/*
    projects/learnCPP/2_multiplyBy2.cpp
    
    Expected behavior:
    1. Get number from console user input
    2. Print number, multiplied by 2, to console
    
    Jeremy@MooreCreativeArts.com
*/

# include <iostream>

// functions
int getNumFromUserInput()
{
    std::cout << "Enter an integer: ";
    int num {};
    std::cin >> num;

    return num;
}

void printMultipliedBy2(int num)
{
    std::cout << num << " multplied by 2 is: " << num * 2 << "\n";
}

int main()
{
    int num { getNumFromUserInput() };

    printMultipliedBy2(num);

    return 0;
}