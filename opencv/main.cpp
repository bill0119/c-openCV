//
//  main.cpp
//  opencv
//
//  Created by bill on 2019/6/20.
//  Copyright © 2019 bill. All rights reserved.
//

#include "main.hpp"
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
