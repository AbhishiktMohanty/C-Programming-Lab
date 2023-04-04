//Q5 2 unsigned char and print result
#include <stdio.h>

int main()
{
    int a4=0x35;
    int b4=0x4B;
    int c4=b4&(0x00FF);
    int d4=c4<<8;
    int t4=(d4|a4);
    printf("%x \n",t4);
  
    unsigned char n1 = 0x35;
	unsigned char n2 = 0x4B;
	
	unsigned char a = n1&(0xf0);
	unsigned char b = n1&(0x0f);
	unsigned char c = b<<4;
	
	unsigned char d = n2&(0xf0);
	unsigned char d1 = d>>4;
	
	unsigned char e = n2&(0x0f);
	
	unsigned char a1 = (a|d1);
	unsigned char a2 = (c|e);
	
	printf("The new hexadecimal number 1 is: %x \n", a1);
	printf("The new hexadecimal number 2 is: %x \n", a2);
	
	int c1=a1&(0x00FF);
    int d2=c1<<8;
    int t=(d2|a2);
    printf("%x \n",t);
    return 0;
}