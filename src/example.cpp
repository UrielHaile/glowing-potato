#include <iostream>
#include <opencv2/opencv.hpp>

int main ( int argv, char *argc[]) {
  cv::Mat img = cv::imread("felpu.jpg");
  cv::imshow("Input",img);
  cv::waitKey();
  return 0;
}
