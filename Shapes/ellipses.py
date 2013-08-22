from cv2.cv import * # importing all the opencv libraries
img=CreateMat(400,400,CV_8UC3) # creating blank image of 400x400 pixels
Ellipse(img,(img.rows/2,img.cols/2),(100,25),0,0,360,(255,255,255)) # Ellipse(img, center,axes,angle,start_angle,end_angle, color [, thickness [, lineType [, shift]]])
Ellipse(img,(img.rows/2,img.cols/2),(100,25),45,0,360,(255,255,255)) 
Ellipse(img,(img.rows/2,img.cols/2),(100,25),90,0,360,(255,255,255)) 
Ellipse(img,(img.rows/2,img.cols/2),(100,25),135,0,360,(255,255,255))

ShowImage("Window",img) # Displaying the image ... 
WaitKey(0)

