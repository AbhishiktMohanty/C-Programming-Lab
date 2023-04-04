//Q7 Pass a string along with a charecter and return back how many times the given charecter is present in the string and also return the string by replacing the given charecter with a space
#include<stdio.h>
int replace(char a[],char c){
	int count=0;
	for(int i=0;i<100;i++){
		if(a[i]==c){
			a[i]=' ';
			count++;
		}
	}
	return count;
}
int main(){
	char a[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",a);
	char srch;
	printf("Enter the character which you want to replace by spaces: ");
	scanf("%s",&srch);
	int z=replace(a,srch);
	printf("The character occurs %d times in the given string\n",z);
	printf("\nThe required string by replacing the given charecter with a space string is: %s\n",a);
	return 0;
}