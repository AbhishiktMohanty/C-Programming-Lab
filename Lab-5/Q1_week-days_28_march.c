//Q1 Display the week days based on user input.
#include<stdio.h>

int main(){
    int day;
    printf("Enter the number corresponding to the day: ");
    scanf("%d", &day);

    switch(day){
        case 1: printf("It's a Sunday\n");
                break;
        case 2: printf("It's a Monday\n");
                break;
        case 3: printf("It's a Tuesday\n");
                break;
        case 4: printf("It's a Wednesday\n");
                break;
        case 5: printf("It's a Thursday\n");
                break;
        case 6: printf("It's a Friday\n");
                break;
        case 7: printf("It's a Saturday\n");
                break;
    }
    return 0;
}