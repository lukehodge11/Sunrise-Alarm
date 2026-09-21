# Automated Blinds / Sunrise-Alarm

### [YouTube Demonstration](https://youtube.com/shorts/Jl2_w3eue-Q?feature=share) 

<h2>Description</h2>
The purpose of this project was to create a way to wake my body up in the morning to light instead of sound. Our circadian rhythms are naturally synced to the sun, and because of this, waking up to bright light instead of sound has been shown to have positive affects on mood, alertness, stress levels, as well as other hormonal changes. So I wanted to create a mechanism to open my blinds mechanically, and then sync this mechanism to go off with my morning alarm. To open the blinds mechanically, I designed a 3D printed mounting bracket in SolidWorks that I screwed into my wall. I removed the twisting rod on the blinds and mounted a yellow TT motor onto the 3D-printed bracket using 2 zip ties. I designed and 3D printed a linkage to go onto the motor shaft to connect to the motor to the winding mechanism on the blinds. Now that the blinds were motorized, I coded a custom alarm program using an Arduino Mega 2560, C/C++ programming, and a RTC (real-time clock) chip. I then integrated these two systems so that the alarm would open my blinds at whatever time of day I choose. I synced this alarm system with my morning alarm, so that my blinds now open 5 minutes before my phone alarm goes off. I also added buttons to open and close the blinds at will, because I had to remove the manual twisting rod. The Arduino is powered by a USB outlet, and the motor is powered by a 12V direct-TV AC adapter that I found at Goodwill for $1.99. No pun intended, but the difference in how I feel from waking up to this system really is night and day. I am usually out of bed now before my phone alarm even goes off. 

<h2>Electronics Used</h2>

- <b>Arduino Mega 2560</b>
- <b>L298N motor controller</b>
- <b>12V 18W direct-TV AC adapter</b>
- <b>DS3231 Real Time Clock RTC</b>
- <b>yellow TT motor</b>


<p align="center">
Winding Mechanism: <br>
<img width="450" height="600" alt="sunrise alarm winding mechanism" src="https://github.com/user-attachments/assets/4cd81577-9b1d-4986-98ca-e9d26aa158d6" /><br><br>
Electronics: <br>
<img width="600" height="450" alt="sunrise alarm electronics" src="https://github.com/user-attachments/assets/676df752-1cb2-49e0-a02f-c3f4c61abcfd" /><br><br>



