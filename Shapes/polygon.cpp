#include <cv.h>
#include <highgui.h>
#include <math.h>
using namespace cv;
int main() {

	Mat img1=imread ("/home/images/smaller.jpg");
	Point p[1][5];
	int a, b;
	for (int i = 0; i < 5; i++) {
		a = sin(i);
		b = cos(i);
		p[0][i] = Point(50 * (1 + a), 50 * (1 + b));
	}
	const Point* ppt[1] = { p[0] };
	int npt[] = { 20 };

	fillPoly(img1, ppt, npt, 1, Scalar(255, 255, 255), 8);
	imshow("window",img1);
	waitKey(0);
	return 0;
}
