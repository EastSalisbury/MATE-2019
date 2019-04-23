#include <AltSoftSerial.h>

AltSoftSerial altSerial;

void setup() {
  Serial.begin(9600);
  Serial.println("AltSoftSerial Test Begin");
  altSerial.begin(9600);
  altSerial.println("Hello World");
}

void loop() {
   int a[9];
   delay(100);
   int b;
   b=altSerial.read();
   if (b==247){
  for (int i=0;i<8;i++){
  a[i]=altSerial.read();
  delay(5);
  }
  int tem;
  int ph;
  tem= a[2]*256+a[3];
  ph=a[4]*256+a[5];
  Serial.print(tem);
  Serial.print(" ");
  Serial.print(ph); 
  Serial.println();
  }
  
}
