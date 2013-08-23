from cv2.cv import * # importing all the opencv libraries
img=LoadImageM("/home/darshil/images/qrcode.png") # reading image
Ellipse(img,(img.rows/2,img.cols/2),(100,25),0,0,360,(50,50,0),5) # Ellipse(img, center,axes,angle,start_angle,end_angle, color [, thickness [, lineType [, shift]]])
Ellipse(img,(img.rows/2,img.cols/2),(100,25),45,0,360,(255,255,255),-1) 
Ellipse(img,(img.rows/2,img.cols/2),(100,25),90,0,360,(50,0,50),5) 
Ellipse(img,(img.rows/2,img.cols/2),(100,25),135,0,360,(255,255,255),-1)
Circle(img,(img.rows/2,img.cols/2),50,(0,255,0),-1)
ShowImage("Window",img) # Displaying the image ... 
WaitKey(0)

