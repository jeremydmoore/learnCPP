/* 
    projects/learnCPP/6_readWriteImages.cpp

    Expected behavior:
    1. create an image with openCV
    2. save image created
    3. open image from disk

    Requirements:
    1. save image using user input filename

    Jeremy@MooreCreativeArts.com
*/

#include <opencv2/opencv.hpp>
#include <iostream>

int getFilenameFromUserInput()
{
    std::cout << "Enter a filename: ";
    std::string name {};
    std::cin >> name;

    return name;
}

int main()
{
    
}