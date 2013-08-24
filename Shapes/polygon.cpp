#include <cv.h>
#include <highgui.h>
#include <math.h>
using namespace cv;
using namespace std;
int main() {

	Mat img1=imread ("/home/darshil/images/smaller.jpg");
	Point p[1][6];
	p[0][0]=Point(30,30);
	p[0][1]=Point(30,60);
	p[0][2]=Point(60,60);
	p[0][3]=Point(60,120);
	p[0][4]=Point(120,120);
	p[0][5]=Point(120,30);

	const Point* ppt[1] = { p[0] };
	int npt[] = { 6 };
	fillPoly(img1, ppt, npt, 1, Scalar(255, 255, 255), 8);
	imshow("window",img1);
	waitKey(0);
	return 0;
}
