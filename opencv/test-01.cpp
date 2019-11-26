#include "stdlib.h"
#include "stdio.h"
#include "opencv/cv.h"
#include "opencv/highgui.h"
using namespace cv;
int main(){
    Mat img = Mat::zeros(500, 500, CV_8UC3);
    
    line(img, Point(100, 300), Point(400, 300), Scalar(255,0,0), 10, CV_AA);    
    rectangle(img, Point(200,200), Point(300, 300), Scalar(0,255,0), 5, 8);
    rectangle(img, Point(200,350), Point(300, 450), Scalar(0,0,255), -1, CV_AA);
    
    circle(img, cv::Point(300, 150), 100, Scalar(0,0,255), 3, 4);    
    double value=20.3;
    char value_c[256];
    sprintf(value_c, "value=%f", value);
    putText(img, value_c, Point(20,100), FONT_HERSHEY_SIMPLEX, 2, Scalar(0,0,255), 1, CV_AA);
        
    imshow("Sample",img);
    waitKey(10000);
    return 0;
}
