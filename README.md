
# UltraSonic-sensor & Arduino & LCD
- Detect and calculating the distance, of an object by Arduino board using ultrasonic sensor and print that value in an LCD display.

![](https://i.ibb.co/BBL463Y/Ultra-sonic.gif)

## Used Components

- Arduino Uno (or ESP32 can be used, both have the same C++ code).
- LCD display
- PCF8574 Microcontroller (for I2C communication protocol with the LCD), we can dispense on it, but a lot of pins (more than 4) gonna be occupied by the Arduino, instead we use this Microcontroller and use just 2 pins.
- Ultra-sonic sensor
- potentiometer (use it as an object distance just for testing), you don't need it in the real version of this project (this a simulation project).

## How to install & what you need
This is a simulation project, And the circuit design, the source code, and the result are completely the same as a real project. so in case you want to try it in a real version, you can use the same steps above (except the potentiometer as I told you it just acts like an object distance in this case).
- You need to:
    - install the simulation software (Proteus in this case) from [here](https://filecr.com/windows/proteus/?id=394206745600).
    - Download the Arduino Library for Proteus from [Here](https://www.theengineeringprojects.com/2015/12/arduino-uno-library-proteus.html), then copy all the files inside the downloaded ZIP to: `C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY`.
    - Download the Ultra-sonic sensor library from [here](https://www.theengineeringprojects.com/2015/02/ultrasonic-sensor-library-proteus.html), And do the same step right above.
    - Download the LCD display sensor library from [here](https://www.theengineeringprojects.com/2023/08/lcd-library-for-proteus-v20.html), And do the same step right above.
    - ! The potentiometer and the I2C Microcontroller are originally embedded in proteus already.

## How to run
- Download this project file (Proteus file alongside the Arduino .ino source code).
- then open the file with (.pdsprj) extension with Proteus software.
- double click on the Arduino component and go to 'Upload Hex file' and select the (.hex) file from the files above.
    ![](https://i.ibb.co/tLck7m5/Screenshot-2024-04-11-184217.png)
- then run the code!

## License and usage
- The files above including the Arduino source code are free to use, share, and edit.
- All this is for the sake of spreading knowledge! 🧑‍🎓😎🎓.
