#include<Altino.h>
//Random sounds generated as something gets close to front left IR sensor
SensorData sdata;
int cnt=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  sdata=Sensor(1);
    if(sdata.IRSensor[0]<30)
    {
      cnt++;
      Display(48+cnt);
      Sound(37+cnt); // 37 middle C
      delay(100);
 
    }

}


  
  
