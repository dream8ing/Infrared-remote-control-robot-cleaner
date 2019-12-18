#include<reg52.h>
#include<intrins.h>
#define uchar unsigned char
#define uint unsigned int


sbit OUT1=P1^0;
sbit OUT2=P1^1;
sbit OUT3=P1^2;
sbit OUT4=P1^3;
sbit OUT5=P1^4;
sbit OUT6=P1^5;
sbit OUT7=P1^6;
sbit OUT8=P1^7;
sbit IN4=P3^3;
sbit IN3=P3^2;
sbit IN2=P3^1;
sbit IN1=P3^0;

sbit light1=P2^1;
	 sbit light2=P2^2;


   int i,z,t;


void delay1(uint z)//1ms
{
	uint x,y;
	for(x=z;x>0;x--)
		for(y=120;y>0;y--);	
}	
        
		  		 
void main()
{
       
	  OUT1=1;		  
	  OUT2=0;
	  OUT3=1 ;
	  OUT4=0;
	  OUT5=1;		
	  OUT6=0;
	  OUT7=1;
	  OUT8=0; 	  light1=0;		light2=0;
	  delay1(20);
	 	
	 



        while(IN4==0)
	  {
	  OUT1=0;
	  OUT2=0;
	  OUT3=0 ;
	  OUT4=1;
	  OUT5=0;
	  OUT6=0;
	  OUT7=0;
	  OUT8=1;  	light1=1;
	  delay1(800);
	  
	   }	

		while(IN3==0)
	  {
	  OUT1=0;
	  OUT2=0;
	  OUT3=0;
	  OUT4=1;
	  OUT5=0;
	  OUT6=0;
	  OUT7=0;
	  OUT8=1;		  	light1=1;  
	  		 delay1(800);
	    }	

      while(IN2==0)
	  {
	  OUT1=0;
	  OUT2=0;
	  OUT3=0;
	  OUT4=1;
	  OUT5=0;
	  OUT6=0;
	  OUT7=0;
	  OUT8=1;	light1=1;
	   delay1(800);
	   }
	   
	   	  while(IN1==0)
	  {
	  OUT1=0;
	  OUT2=0;
	  OUT3=0;
	  OUT4=1;
	  OUT5=0;
	  OUT6=0;
	  OUT7=0;
	  OUT8=1;	   light1=1;
	   delay1(800);
	    }	
	   	 
} 		