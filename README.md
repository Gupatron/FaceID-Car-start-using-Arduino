The FaceID remote start python file is a program that uses OpenCV to determine if the face being shown to the webcam is the users face or not. If it is then it sends a signal to an arduino over serial communication to turn on a relay for 1.5 seconds. 


**SETUP** 

In order to get this working on your own you need to take a photo of yourself in goodlighting from the shoulders up. Then put that image in the same folder as your project directory and modify reference_img in the code so that it has the same name as your image file. 


**Wiring**

I implemented this on a 1966 bronco that used an old ford starter solenoid which made the wiring and hardware setup very easy. This is a very basic sketch of what it was wired up like.


<img width="707" height="1255" alt="image" src="https://github.com/user-attachments/assets/dfddd5f9-af19-44f8-b636-2beeee58c600" />


**Video Example** 

https://github.com/user-attachments/assets/500f58ea-a624-4049-8b36-a9ed922969f0



