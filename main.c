#include <avr/io.h>
#include <util/delay.h>


const int demora = 1000; 
char num[10] = {0B111111,0B001100,0B011011,0B11110,0B101100,0B110110,0B110111,0B011100,0B111111,0B111110};
int g = PD6;
int contador=9;
int main()
{ 
 DDRB = 0B11111111;
 DDRD = 0B01000000;
	while (1){
      if(contador==0){
         contador=10;
      }
      if(!(PIND&(1<<2))){
         _delay_ms(30);
         if((PIND&(1<<2))){
            contador-=1;
         }
         switch(contador){
         case 0:{
            PORTB = num[0];
		PORTD &= ~ (1<<g);;
         }
         break;
         case 1:{
            PORTB = num[1];
		PORTD &= ~ (1<<g);
         }
         break;

         case 2:{
            PORTB = num[2];
		PORTD = (1<<g);
         }
         break;
         case 3:{
            PORTB = num[3];
		PORTD = (1<<g);
         }
         break;
         case 4:{
            PORTB = num[4];
		PORTD = (1<<g);
         }
         break;
         case 5:{
            PORTB = num[5];
		PORTD = (1<<g);
         }
         break;
         case 6:{
            PORTB = num[6];
		PORTD = (1<<g);
         }
         break;
         case 7:{
            PORTB = num[7];
		PORTD &= ~ (1<<g);
         }
         break;
         case 8:{
            PORTB = num[8];
		PORTD = (1<<g);
         }
         break;
         case 9:{
             PORTB = num[9];
		PORTD = (1<<g);
         }
         break;
         default:break;
      }

      }

      
      }     
}
