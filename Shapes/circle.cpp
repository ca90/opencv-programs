#include<cv.h>
#include<highgui.h>

using namespace cv;

Mat MyFilledCircle( Point center )
{
	Mat img;
	int thickness = 1;
	int lineType = 8;

	circle( img, center, 16, Scalar( 255, 0, 0), thickness, lineType );
	return img;
};

int main()
{
  Mat image;
  Point arb;
  arb.x=250;
  arb.y=25;

  image=MyFilledCircle(arb);

  namedWindow( "Display Image", CV_WINDOW_AUTOSIZE );
  imshow( "Display Image", image );

  waitKey(0);

  return 0;
}
