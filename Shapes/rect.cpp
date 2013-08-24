#include <cv.h>
#include <highgui.h>
using namespace cv;
int main() {

	Mat img1=imread ("/home/darshil/images/smaller.jpg");
	rectangle(img1, Point(0,0) ,Point(100,250), 1, Scalar(255, 255, 255), 8);
	imshow("window",img1);
	waitKey(0);
	return 0;
}
