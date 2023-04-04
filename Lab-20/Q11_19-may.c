//Q11 WRT to reverse the given sequence
#include<stdio.h>
void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(char *p,int ctr){  
    static int i=0; 
    if(p[ctr]=='\0')
        return;
    reverse(p,ctr+1);
    if(i<=ctr){
        swap(&p[i++],&p[ctr]);
    }
}
int main(){   
    char str[100];
    printf("Enter the string you want to reverse: ");
    scanf("%[^\n]s",str);
    int l=0;
    for(int i=0;str[i]!='\0';i++)
        l++;
    printf("The original string is: ");
    for(int i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
    reverse(str,0);
    printf("Reverse of the given string is: ");
    for(int i=0;str[i]!='\0';i++)
        printf("%c",str[i]);
    return 0;
}