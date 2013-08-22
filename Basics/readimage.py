from cv2.cv import *
img=LoadImageM("/home/darshil/images/hello.jpg")
NamedWindow("Display",CV_WINDOW_AUTOSIZE)
ShowImage("Display",img)
WaitKey(0)

