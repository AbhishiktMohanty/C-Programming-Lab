//Q6 Print 4 bytes individually
#include<stdio.h>

int main(){
    int n=0X194B563D;
    int a=n&0xff;
    printf("1st byte is %x\n",a);
    int b=(n&0xff00)>>8;
    printf("2nd byte is %x\n",b);
    int c=(n&0xff0000)>>16;
    printf("3rd byte is %x\n",c);
    int d=(n&0xff000000)>>24;
    printf("4th byte is %x\n",d);
    return 0;
}