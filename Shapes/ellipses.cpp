#include<cv.h>
#include<highgui.h>

using namespace cv;
void drawEllipse(Mat, double);

int main() {

	Mat image= Mat::zeros(400, 400, CV_8UC3);
	//four ellipses with angles 180deg, 135deg, 90deg, 45deg
	drawEllipse(image,45);
	drawEllipse(image,90);
	drawEllipse(image,180);

	drawEllipse(image,135);
	namedWindow("Display Image", CV_WINDOW_AUTOSIZE);
	imshow("Display Image", image);

	waitKey(0);

	return 0;
}
void drawEllipse(Mat img, double angle)
{
	int thickness = 2;
		int lineType = 8;

		ellipse(img, Point(200, 200), Size(100, 25), angle, 0, 360,
					Scalar(255, 0, 0), thickness, lineType);
}

