#include <cv.h>
#include <highgui.h>

int main()
{
	IplImage* img1 = cvLoadImage("/home/darshil/images/hello.jpg", CV_LOAD_IMAGE_COLOR);
    	cvNamedWindow("Display", CV_WINDOW_AUTOSIZE);
    	cvShowImage("Display",img1);
    	cvWaitKey(0);
    	cvReleaseImage(&img1);
	return 0;
}
