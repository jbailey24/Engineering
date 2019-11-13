

# Intermediate_Arduino


## Fading LED


<a href="https://github.com/jbailey24/Intermediate-Arduino/tree/master/Dim_Blink_Arduino_Final">Link to File</a> <br/>

<img src="https://raw.githubusercontent.com/adent11/Intermediate-Arduino/master/FritzingDiagrams/LED_Blink_RevisitedScreenshot.PNG" alt="Credit to adent11 for the Fritzing" width="400">

In this assignment, I made a LED fade in and out. The brightness is printed to the serial monitor using the "\_" character, so that a low value might read "*\__*", whereas a high value might read "*\____________________*". The result is a wave that goes in and out with the brightness of the LED.   

The most challenging thing about this assignment was finding a quick way to code the bar graph. You could make a bunch of if statements that each print out a certain number of "\_"s given the range, but that would be very tedious. Instead, I used a for statement, which repeatedly added a "\_" the number of times of the LED brightness divided by 10 and then moved on to the next line when the variable reached 0.

## Hello LCD Screen


<a href="https://github.com/jbailey24/Intermediate-Arduino/blob/master/Hello_LCD_Screen/Hello_LCD_Screen.ino">Link to File</a> <br/>

<img src="https://github.com/adent11/Intermediate-Arduino/blob/master/FritzingDiagrams/Hello_LCDScreenshot.PNG?raw=true" alt="Credit to adent11 for the Fritzing" width="400"> 

In this assignment, I printed "hello world" and the number of seconds since the program began on an LCD.

I found that the coding was very simple, but I was a little bit daunted by the number of wires (12) that had to be attached to the LCD. By staying organized, I found that the wiring was not that difficult in the end.


## LCD Backback


<a href="https://github.com/jbailey24/Intermediate-Arduino/blob/master/LCD_Backpack/LCD_Backpack.ino">Link to File</a> <br/>

<img src="https://github.com/adent11/Intermediate-Arduino/blob/master/FritzingDiagrams/LCD_BackpackScreenshot.PNG?raw=true" alt="Credit to adent11 for the Fritzing" width="400">

In this assignment, I started off by doing the same thing as the last assignment, but using a LCD backpack, which reduces the number of wires coming from the LCD down to 4. After I got that program running, I added a button to my breadboard, and coded the LCD to display the number if times the button had been pushed. Finally, I added a SPDT switch, which changed whether the button counted up or down.

The coding was the obvious challenge of this assignment. To start off, the LCD code had to be changed slightly because of the backpack, but that was straightforward. The more difficult part was coding the button so it counted when it was pressed, not for how long it was pressed. This basically boils down to detecting the button's state change. But after that, adding the switch was fairly simple.


## Photointerupter


<a href="https://github.com/jbailey24/Intermediate-Arduino/blob/master/Photointerupter/Photointerupter.ino">Link to File</a> <br/>

<img src="https://lh5.googleusercontent.com/a7a1Ng38JoAAsoSSGNZcLe9XvKx5NceYrS3ymGJ7oA_xoxe7vOzBOn27z4-V-Kt2_Axjzsn964AGktniQRIUU5DMoOct7cTBs-20z8MgWe4BIl4IXjE1bTli1_pSOm_RoyrbAVVF" alt="Credit to adent11 for the Fritzing" width="400">

In this assignment, I used a photointerupter to detect whenever something was between its two legs and turn on an LED.

I found this to be not that difficult, but I did learn how to use the attachInterrupt() function.

## Potentiometer


<a href="https://github.com/jbailey24/Intermediate-Arduino/blob/master/Intermediate_Potentiometer/Intermediate_Potentiometer.ino">Link to File</a> <br/>

<img src="https://github.com/adent11/Intermediate-Arduino/blob/master/FritzingDiagrams/PotentiometersScreenshot.PNG?raw=true" alt="Credit to adent11 for the Fritzing" width="400">

In this assignment,  I used a potentiometer to change the brightness of an LED and print the value to an LCD.

I have used potentiometers many times before, and so this was unchallenging, but a good refresher. 

## Motor Control


<a href="https://github.com/jbailey24/Intermediate-Arduino/blob/master/Motorthing/Motorthing.ino">Link to File</a> <br/>

<img src="https://github.com/adent11/Intermediate-Arduino/raw/master/FritzingDiagrams/Motor_ControlScreenshot.PNG" width="400">

In this assignment, I used a potentiometer to change the speed of a DC motor.

While the coding was very basic, I found the wiring to be tricky. I had to solder my own battery pack to get the right voltage, which took a couple of tries. I also had never used a transistor or a diode before, and even though I understood how to use the diode, the transistor proved itself to be finicky. In the end, I got it working just by fiddling around with the wiring and changing different parts out.


## Ultrasonic Sensor


<a href="https://github.com/jbailey24/Intermediate-Arduino/blob/master/UltrasonicSensor/UltrasonicSensor/Unknown%20Code.ino">Link to File</a> <br/>

<img src="https://raw.githubusercontent.com/adent11/Not-So-Basic-Arduino/master/FritzingDiagrams/Hello_FunctionsScreenshot.PNG" alt="Credit to adent11 for the Fritzing" width="400">

This assignment was from last year, but I wanted to add it anyways. In this assignment, I turned a servo using an ultrasonic sensor. The ultrasonic sensor would send out a signal, the signal would bounce off of an object and return to the sensor. Using the time it took for the signal to return, I calculated the distance of the object from the sensor, and then rotated the servo accordingly.




###### All Fritzings except Motor Control by <a href="https://github.com/adent11">adent11</a>

    


