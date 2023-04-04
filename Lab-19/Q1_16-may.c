//Q1 Distinguise between call value and call by reference by your code
#include<stdio.h>
int increment(int a){
	a++;
	return a;
}
int Increment(int *a){
	(*a)++;
	return *a;
}
int main(){
	int z;
	printf("Enter an number: ");
	scanf("%d",&z);
	printf("If we pass by value before function is called:passed value:%d\n",z);
	int x=increment(z);
	printf("If we pass by value after function is called:passed value:%d returned value:%d\n",z,x);
	printf("If we pass by reference before function is called:passed value:%d\n",z);
	int y=Increment(&z);
	printf("If we pass by reference after function is called:passed value:%d returned value:%d",z,y);
	return 0;
}