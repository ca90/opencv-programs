#include <cv.h>
#include <highgui.h>

int main()
{
	IplImage* img1 = cvLoadImage("~/images/hello.jpg", CV_LOAD_IMAGE_COLOR);//loading image to variable pointer img1
    	cvNamedWindow("Display", CV_WINDOW_AUTOSIZE);//creating a window named 'Display'
    	cvShowImage("Display",img1);//showing the image in window
    	cvWaitKey(0);
    	cvReleaseImage(&img1);
	return 0;
}
