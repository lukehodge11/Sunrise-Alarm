#include "RTClib.h"
RTC_DS3231 rtc;

char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};


int wm1 = 45;
int wm2 = 49;
int pwm = 3;
int button1 = 22;
int button2 = 23;
int cat1, cat2;



void setup() {
  pinMode(wm1, OUTPUT);
  pinMode(wm2, OUTPUT);
  pinMode(pwm, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  Serial.begin(9600);
 

  #ifndef ESP8266
  while (!Serial);
#endif
 if (! rtc.begin()) {
   
    Serial.println("Couldn't find RTC");
    Serial.flush();
    while (1) delay(10);
  }

  if (rtc.lostPower()) {
    Serial.println("RTC lost power, let's set the time!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

 //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
}

void loop() {
DateTime now = rtc.now();

if(now.dayOfTheWeek() == 1 && now.hour() == 7 && now.minute() == 0){
    stop();
    goDown();
    stop();
    delay(70000);
  }

if(now.dayOfTheWeek() == 2 && now.hour() == 7 && now.minute() == 0){
    stop();
    goDown();
    stop();
    delay(70000);
  }

if(now.dayOfTheWeek() == 3 && now.hour() == 7 && now.minute() == 0){
    stop();
    goDown();
    stop();
    delay(70000);
  }


if(now.dayOfTheWeek() == 4 && now.hour() == 7 && now.minute() == 0){
    stop();
    goDown();
    stop();
    delay(70000);
  }

  if(now.dayOfTheWeek() == 5 && now.hour() == 8 && now.minute() == 25){
    stop();
    goDown();
    stop();
    delay(70000);
  }
  if(now.dayOfTheWeek() == 0 && now.hour() == 8 && now.minute() == 0){
    stop();
    goDown();
    stop();
    delay(70000);
  }

if(now.hour() == 20 && now.minute() == 0){
    stop();
    goUp();
    stop();
    delay(70000);
  }
/*
  if(now.dayOfTheWeek() == 4 && now.hour() == 17 && now.minute() == 51){
    stop();
    goDown();
    stop();
    delay(70000);
  }
*/


  if(digitalRead(button1) == 1){
    stop();
    goDown();
    stop();
  }

  if(digitalRead(button2) == 1){
    stop();
    goUp();
    stop();
  }
}


void goUp(void){
  digitalWrite(wm1, HIGH);
  digitalWrite(wm2, LOW);
  analogWrite(pwm, 100);
  delay(1800);
}

void stop(void){
  analogWrite(pwm, 0);
  delay(500);
}

void goDown (void){
  digitalWrite(wm1, LOW);
  digitalWrite(wm2, HIGH);
  analogWrite(pwm, 100);
  delay(2000);
}