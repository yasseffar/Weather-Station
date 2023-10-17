#  Weather Station

The "Creation of a Connected Weather Station with ESP8266 and Blynk" project is an exploration of the Internet of Things (IoT) in the field of meteorology. It involves designing and building a weather station that can collect, transmit, and display weather data in real-time using the ESP8266 Wi-Fi module and the Blynk IoT platform.
This project allows us to monitor and display real-time temperature and humidity data using the ESP8266 and DHT11.


# Hardware Description
## The ESP8266
The ESP8266 is a popular and versatile Wi-Fi module used in various applications. Its primary role is to provide Wi-Fi connectivity to microcontrollers and embedded systems, making it an essential component for the Internet of Things (IoT) and wireless communication
![nodemcu](https://github.com/yasseffar/Station-Meteo/assets/101462588/b5bc0acb-786d-4ad0-9db0-4b299069caab)

## The DHT11 sensor


# Software Description
## Install and configure Arduino IDE
Make sure you use a version of the Arduino IDE which is supported by the ESP8266 platform. Follow the tutorial on our documentation platform.

## Install libraries in Arduino IDE
Install the following libraries with your Arduino Library Manager in Sketch > Include Library > Manage Libraries...

## Blynk Platform Operation:


![yyy](https://github.com/yasseffar/Station-Meteo/assets/101462588/9c8d77bf-cf7b-4040-8ce9-f9a7efd96d95)

## Blynk Platform Configuration:
#### Customize the Blynk Interface by creating virtual pins for temperature and humidity
Screenshots

![App Screenshot](https://github.com/yasseffar/Station-Meteo/assets/101462588/394f74fa-e117-4769-8175-7bb4d01de919)

![App Screenshot](https://github.com/yasseffar/Station-Meteo/assets/101462588/bd265913-1189-4538-a702-d23c040e614e)

![App Screenshot](https://github.com/yasseffar/Station-Meteo/assets/101462588/932748c4-2fea-47b2-b539-b458569e717b)

#### Creation of a new device
 Screenshot
 
![App Screenshot](https://github.com/yasseffar/Station-Meteo/assets/101462588/3a7697db-b9c9-4bd6-93f3-2b4ee54d195a)


#### Copying the FIRMWARE CONFIGURATION which includes the model ID, device name, and AuthToken to Arduino IDE.
Screenshot

![App Screenshot](https://github.com/yasseffar/Station-Meteo/assets/101462588/952c5be8-c2da-4dd8-b0e3-a892b1f4a1a3)

![App Screenshot](https://github.com/yasseffar/Station-Meteo/assets/101462588/dafa42a1-1400-452c-9bfd-d60d4d8be17b)


## Arduino IDE Configuration:
#### Select the board that you are going to use, and then choose the port where your ESP8266 board is connected.
Screenshot

![App Screenshot](https://github.com/yasseffar/Station-Meteo/assets/101462588/aee273c5-903b-4c7a-8f74-1b5bd416cf88)

#### Select the Port
 Screenshot
 
![App Screenshot](https://github.com/yasseffar/Station-Meteo/assets/101462588/c335456a-4f66-471f-84e1-2d6b9110dd1e)

#### Next, include the libraries. The (WIFI_PASSWORD) and (WIFI_SSID) are used to allow the ESP8266 to connect to the Wi-Fi network (the available internet access point). On the other hand, (AUTH Blynk) is specific to the application running on Android or iOS and is used to identify the hardware it should communicate with.
#### Compile the code and upload it to the board
 Screenshot
 
![App Screenshot](https://github.com/yasseffar/Station-Meteo/assets/101462588/e0be0669-72a5-4648-809a-78f62a44866b,)


# Data Visualization:
![33](https://github.com/yasseffar/Station-Meteo/assets/101462588/cf732540-2276-49b7-8098-2cc288992ba5)



