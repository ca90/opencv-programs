from cv2.cv import * # importing all the opencv libraries
img=CreateMat(400,400,CV_8UC3) # creating blank image of 400x400 pixels
Circle(img,(img.rows/2,img.cols/2),50,(255,255,255), -1) # Circle(img, center, radius, color [, thickness [, lineType [, shift]]])
ShowImage("Display",img) # Displaying the image ... 
WaitKey(0)

