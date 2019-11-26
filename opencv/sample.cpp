#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <unistd.h>
#include <string>

int main(int argc, const char* argv[])
{
  char dir[255];
  getcwd(dir,255);
  std::string path = dir;
  cv::Mat mat = cv::imread(path + "/" + "lena.jpg", cv::IMREAD_COLOR);
  cv::namedWindow("sample", cv::WINDOW_AUTOSIZE);
  cv::imshow("sample", mat);
  cv::waitKey(0);
  cv::destroyAllWindows();

  return 0;
}
