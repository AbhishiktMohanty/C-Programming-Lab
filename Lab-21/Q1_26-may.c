/*Q1 Take a student structure taking roll, name, mark[3] pass there structure to a function which complete the cgpa and average and return back to the main */
#include<stdio.h>
struct student{
	int roll;
	char name[20];
	int marks[3];
};
float average(struct student std){
	float a=0.0;
	for(int i=0;i<3;i++){
		a+=1.0 * std.marks[i];
	}
	a/=3;
	return a;
}
float cgpa(struct student std){
	float b=0.0;
	for(int i=0;i<3;i++){
		b+=1.0 * std.marks[i];
	}
	b=(b/300);
	b*=9.5;
	return b;
}
int main(){
	struct student a;
	printf("Enter the roll number of the student: ");
	scanf("%d",&a.roll);
	printf("Enter the name of the student: ");
	getchar();
	scanf("%s",a.name);
	printf("Enter the marks of 3 subjects: ");
	scanf("%d %d %d",&a.marks[0],&a.marks[1],&a.marks[2]);
	float avg=0.0,d=0.0;
	avg=average(a);
	d=cgpa(a);
	printf("CGPA of the above student is %.3f and avg of marks in 3 subject is %.3f\n",d,avg);
	return 0;
}