from cv2.cv import * # importing all the opencv libraries
img=LoadImageM("/home/darshil/images/hello.jpg") # loading image in form of matrix * dont know but M will mean Matrix 
NamedWindow("Display",CV_WINDOW_AUTOSIZE) # Defining a window named "Display" . Doesn't matter if added or not
ShowImage("Display",img)  #Displaying the image
WaitKey(0) #waitkey to wait till the output comes

