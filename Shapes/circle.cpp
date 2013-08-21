#include<cv.h>
#include<highgui.h>

using namespace cv;

Mat filledCircle(Mat img, Point center) {
	int thickness = -1;
	int lineType = 8;

	circle(img, center, 100, Scalar(0, 255, 255), thickness, lineType);
	return img;
}
;

int main() {
	Mat image = Mat::zeros(400, 400, CV_8UC3);
	image = filledCircle(image, Point (200,200));

	namedWindow("Display Image", CV_WINDOW_AUTOSIZE);
	imshow("Display Image", image);

	waitKey(0);

	return 0;
}
