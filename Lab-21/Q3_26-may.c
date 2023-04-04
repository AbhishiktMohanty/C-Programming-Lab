//Q3 Take student struct (name, roll, DOB) method structure pass 3 student information to a function this function will store the average 3 student information  in a another array of structure according to the decreasing order of their age. Then inside the main you display these 3 students as per their age in decreasing order.
#include<stdio.h>
struct student{
	int roll;
	char name[20];
	struct dob{
		int dd;
		int mm;
		int yy;
	};
	struct dob DOB; 
};
int comp(struct dob dob1,struct dob dob2){
	if(dob1.yy>dob2.yy){
		return 1;
	}else if(dob1.yy<dob2.yy){
		return 0;
	}
	else{
		if(dob1.mm<dob2.mm){
			return 0;
		}else{
			if(dob1.mm>dob2.mm){
				return 1;
			}
			else if(dob1.dd<dob2.dd){
				return 0;
			}else{
				return 1;
			}
		}
	}
}
void desc(struct student *s){
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(comp((s+i)->DOB,(s+j)->DOB)){
				struct student a=*(s+i);
				*(s+i) = *(s+j);
				*(s+j)=a;
			}
		}
	}
}
int main(){
	struct student list[3];
	printf("Enter the data of 3 students:\n");
	for(int i=0;i<3;i++){
		printf("\nEnter the roll number of student %d: ",i+1);
		scanf("%d",&list[i].roll);
		printf("Enter the name of student %d: ",i+1);
		getchar();
		scanf("%[^\n]s",&list[i].name);
		printf("Enter the date of birth of student %d in form of dd/mm/yyyy: ",i+1);
		scanf("%d/%d/%d",&list[i].DOB.dd,&list[i].DOB.mm,&list[i].DOB.yy);
	}
	desc(list);
	printf("\nList of students is displayed in decending order of there age is: \n");
	for(int i=0;i<3;i++){
	    printf("%d is the roll number of student %s and his date of birth is %d/%d/%d\n",list[i].roll,list[i].name,list[i].DOB.dd,list[i].DOB.mm,list[i].DOB.yy);
	}
	return 0;
}