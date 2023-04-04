//Q2 Take student struct (roll, name, marks[3],CGPA, average) through call by reference return the CGPA and Average
#include<stdio.h>
struct student{
	int roll;
	char name[20];
	int marks[3];
	float cgpa;
	float avg;
};
void average(struct student *std){
	float a=0.0;
	for(int i=0;i<3;i++){
		a+=1.0 * (*std).marks[i];
	}
	a/=3;
	(*std).avg=a;
	return;
}
void cgpa(struct student *std){
	float b=0.0;
	for(int i=0;i<3;i++){
		b+=1.0 * (*std).marks[i];
	}
	b=(b/300);
	b*=9.5;
	(*std).cgpa=b;
	return;
}
int main(){
	struct student a;
	printf("Enter the roll no. of the student: ");
	scanf("%d",&a.roll);
	printf("Enter the name of the student: ");
	getchar();
	scanf("%[^\n]s",a.name);
	printf("Enter the marks of 3 subjects: ");
	scanf("%d %d %d",&a.marks[0],&a.marks[1],&a.marks[2]);
	average(&a);
	cgpa(&a);
	printf("CGPA of %s roll no. %d is %.3f and average of marks in 3 subject is %.3f\n",a.name,a.roll,a.cgpa,a.avg);
	return 0;
}