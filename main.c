#include<reg52.h>
void delayms(unsigned int ms);
void main()
while(1)
	{ P0=0xF940;
		delayms(250);
		P0=0xF9F9;
		delayms(250);
		P0=0xF9A4;
		delayms(250);
		P0=0xF9B0;
		delayms(250);
		P0=0xF999;
		delayms(250);
		P0=0xF992;
		delayms(250);
		P0=0xF982;
		delayms(250);
		P0=0xF9F8;
		delayms(250);
		P0=0xA400;
		delayms(250);
		P0=0xFF;
		delayms(500);
	} 
}
void delayms(unsigned int ms)
{ unsigned int i,j;
	for(i=0;i<ms;i++)
	{ for(j=0;j<ms;j++);
	}
}
	