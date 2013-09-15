from cv2.cv import * # importing all the opencv libraries
img=CreateMat(600,600,CV_8UC3) # creating blank image of 400x400 pixels
Rectangle(img,(img.rows/2,img.cols/3),(img.rows/3,img.cols/2),(255,255,255), 3) # Rectangle(img, pt1, pt2, color [, thickness [, lineType [, shift]]])
ShowImage("Display",img) # Displaying the image ... 
WaitKey(0)

