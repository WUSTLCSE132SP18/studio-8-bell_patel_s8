
#include <Wire.h> // Must include Wire library for I2C
#include <SparkFun_MMA8452Q.h> // Includes the SFE_MMA8452Q library

// Begin using the library by creating an instance of the MMA8452Q
//  class. We'll call it "accel". That's what we'll reference from
//  here on out.
MMA8452Q accel;

void setup()
{
  Serial.begin(9600);
  accel.init();
}

void loop()
{

  if (accel.available())
  {
    accel.read();
    printCalculatedAccels();
    Serial.println(); 
  }
}

void printAccels()
{
  Serial.print(accel.x, 3);
  Serial.print(", ");
  Serial.print(accel.y, 3);
  Serial.print(", ");
  Serial.print(accel.z, 3);
  Serial.print(" ");
}

void printCalculatedAccels()
{ 
  Serial.print(accel.cx, 3);
  Serial.print(", ");
  Serial.print(accel.cy, 3);
  Serial.print(", ");
  Serial.print(accel.cz, 3);
  Serial.print(" ");
}


