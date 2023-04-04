//Q2 Multiplication Table
#include <stdio.h>

  int main(void) {
  int n;
  printf("Enter a Number:");
  scanf("%d",&n);
  printf("The Multiplication table of the given Number is\n");
    printf("%d X %d = %d\n", n,1, n*1);
    printf("%d X %d = %d\n", n,2, n*2);
    printf("%d X %d = %d\n", n,3, n*3);
    printf("%d X %d = %d\n", n,4, n*4);
    printf("%d X %d = %d\n", n,5, n*5);
    printf("%d X %d = %d\n", n,6, n*6);
    printf("%d X %d = %d\n", n,7, n*7);
    printf("%d X %d = %d\n", n,8, n*8);
    printf("%d X %d = %d\n", n,9, n*9);
    printf("%d X %d = %d\n", n,10, n*10);
    
  return 0;
}