#include <wiringPi.h>  
int main(void)  
{  
  wiringPiSetup() ;  
  pinMode (25, OUTPUT) ;  
  for(;;)   
  {  
    digitalWrite(25, HIGH) ; delay (1) ;  
    digitalWrite(25,  LOW) ; delay (1) ;  
  }  
} 
