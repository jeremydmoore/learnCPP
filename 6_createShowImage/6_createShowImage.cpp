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

int main()
{
    // create new image with:
    // height: 800, width: 1200
    // 8 bit with 3 channels
    // every pixel is BGR: 102, 201, 111 (a nice purple)
    cv::Mat image(800, 1200, CV_8UC3, cv::Scalar(137, 34, 111));
    
    cv::String windowName = "Our image";  // name the window first
    cv::namedWindow(windowName);  // create the window
    cv::imshow(windowName, image);  // show the image in created window
    cv::waitKey(0);  // wait for any keyboard input then ...
    cv::destroyWindow(windowName);  // boom! destroy the window    

    return 0;
}