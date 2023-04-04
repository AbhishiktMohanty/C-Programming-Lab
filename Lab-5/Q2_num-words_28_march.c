//Q2 Input a number and display it in words
#include<stdio.h>

int main(){
    int n;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    int dig3 = n%10;
    n = n/10;
    int dig2 = n%10;
    int dig1 = n/10;

        switch(dig1){
            case 1: printf("One ");
                    break;
            case 2: printf("Two ");
                    break;
            case 3: printf("Three ");
                    break;
            case 4: printf("Four ");
                    break;
            case 5: printf("Five ");
                    break;
            case 6: printf("Six ");
                    break;
            case 7: printf("Seven ");
                    break;
            case 8: printf("Eight ");
                    break;
            case 9: printf("Nine ");
                    break;
        };

        switch(dig2){
            case 0: printf("Zero");
                    break;
            case 1: printf("One ");
                    break;
            case 2: printf("Two ");
                    break;
            case 3: printf("Three ");
                    break;
            case 4: printf("Four ");
                    break;
            case 5: printf("Five ");
                    break;
            case 6: printf("Six ");
                    break;
            case 7: printf("Seven ");
                    break;
            case 8: printf("Eight ");
                    break;
            case 9: printf("Nine ");
                    break;
        };

        switch(dig3){
            case 0: printf("Zero");
                    break;
            case 1: printf("One ");
                    break;
            case 2: printf("Two ");
                    break;
            case 3: printf("Three ");
                    break;
            case 4: printf("Four ");
                    break;
            case 5: printf("Five ");
                    break;
            case 6: printf("Six ");
                    break;
            case 7: printf("Seven ");
                    break;
            case 8: printf("Eight ");
                    break;
            case 9: printf("Nine ");
                    break;
        };
    return 0;
}