/*
 * readimage.cpp
 *
 *  Created on: 20-Aug-2013
 *      Author: darshil
 */

#include <cv.h>
#include <highgui.h>

using namespace cv;

int main()
{
  Mat image;
  image = imread("/home/darshil/images/hello.jpg", 1 );

  if(!image.data )
    {
      printf( "No image data \n" );
      return -1;
    }

  namedWindow( "Display Image", CV_WINDOW_AUTOSIZE );
  imshow( "Display Image", image );

  waitKey(0);

  return 0;
}


