#include <Servo.h> 

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos1 = 0;
int pos2 = 0;

void setup() 
{ 
  servo1.attach(4);
  servo2.attach(7);
  servo3.attach(9);
  servo4.attach(11);

  servo1.write(90);              
  servo2.write(90);              
  servo3.write(90);              
  servo4.write(90);
  delay(2000);  //Stay in Lock Position for 2 Sec
} 

void loop() 
{ 
  for(pos1 = 90, pos2 = 90; pos1 > 60, pos2 > 60; pos1--, pos2--)  //left leg up
  {                                  
    servo1.write(pos1);              
    servo2.write(pos2);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  }

  for(pos1 = 60; pos1 >10; pos1--)     
  {                                
    servo1.write(pos1);              
    servo2.write(60);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  for(pos2 = 60; pos2 < 170; pos2++)     
  {                                
    servo1.write(10);              
    servo2.write(pos2);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  for(pos2 = 170; pos2 > 60; pos2--)    
  {                                
    servo1.write(10);              
    servo2.write(pos2);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  for(pos1 = 10; pos1 < 60; pos1++)     
  {                                
    servo1.write(pos1);              
    servo2.write(60);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  for(pos1 = 60, pos2 = 60; pos1 < 90, pos2 < 90; pos1++, pos2++)    
  {                                
    servo1.write(pos1);              
    servo2.write(pos2);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  delay(1000);
  

  for(pos1 = 90, pos2 = 90; pos1 < 120, pos2 < 120; pos1++, pos2++)  //right leg up
  {                                  
    servo1.write(pos1);              
    servo2.write(pos2);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  }

  for(pos2 = 120; pos2 <170; pos2++)     
  {                                
    servo1.write(120);              
    servo2.write(pos2);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  for(pos1 = 120; pos1 > 10; pos1--)     
  {                                
    servo1.write(pos1);              
    servo2.write(170);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  for(pos1 = 10; pos1 < 120; pos1++)    
  {                                
    servo1.write(pos1);              
    servo2.write(170);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  for(pos2 = 170; pos2 >120 ; pos2--)     
  {                                
    servo1.write(120);              
    servo2.write(pos2);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  for(pos1 = 120, pos2 = 120; pos1 > 90, pos2 > 90; pos1--, pos2--)    
  {                                
    servo1.write(pos1);              
    servo2.write(pos2);              
    servo3.write(90);              
    servo4.write(90);              
    delay(20);                       
  } 
  
  delay(1000);
  
} 
