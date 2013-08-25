from cv2.cv import *
from numpy import * 
img=LoadImageM("/home/darshil/images/smaller.jpg")
polys=array(cv.Point,[(50,50),(100,50),(100,100),(50,100)])
FillPoly(img, polys, (255,255,255) )
ShowImage("Window",img) # Displaying the image ... 
print img.rows
print img.cols
#issue: not getting
WaitKey(10000)
quit()


