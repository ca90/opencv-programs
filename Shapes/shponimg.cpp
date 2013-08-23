#include<cv.h>
#include<highgui.h>
#define w 250
using namespace cv;
void drawEllipse(Mat, double);
void drawCircle(Mat);
int main() {

	Mat image = imread("/home/darshil/images/smaller.jpg");

	Scalar color1;
	//four ellipses with angles 180deg, 135deg, 90deg, 45deg
	drawEllipse(image, 45);
	drawEllipse(image, 90);
	drawEllipse(image, 180);
	drawEllipse(image, 135);
	drawCircle(image);
	namedWindow("Display Image", CV_WINDOW_AUTOSIZE);
	imshow("Display Image", image);
	imwrite("/home/darshil/workspace/opennew1/src/images/Ellipses_Image.jpg",
			image);
	waitKey(0);

	return 0;
}
void drawEllipse(Mat img, double angle) {
	int thickness = 2;
	int lineType = 8;

	ellipse(img, Point(w / 2, w / 2), Size(w / 8, w / 32), angle, 0, 360,
			Scalar(255, 0, 0), thickness, lineType);
}

void drawCircle(Mat img) {
	int thickness = -1;
	int lineType = 8;
	circle(img, Point(w / 2, w / 2), w / 4, Scalar(255, 255, 200), thickness,
			lineType);

}

