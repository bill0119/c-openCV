# c-openCV

A openCV sample code on Mac

## install openCV environment

1. brew install cmake
2. brew install opencv
3. open xcode and create command line tool project
   language is c++
   create new group "opencv lib" and add openCV library (/usr/local/Cellar/opencv/{version}/lib/)
   set "Header Search Paths" in "Build Settings" to "/usr/local/Cellar/opencv/{version}/include"
   set "Library Search Paths" in "Build Settings" to "/usr/local/Cellar/opencv/{version}/lib"

## sample code
``` c
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, const char * argv[]) {
    // insert code here...
    Mat image;
    image=imread("/Users/bill/project/c-openCV/Lenna.jpg",1);
    namedWindow("Display Image",WINDOW_AUTOSIZE);
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}

```
