/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
Description:Exam Eligibility
*/
#include<stdio.h>include 

int main(){
	float attendance,marks;
	
	printf("Enter your average marks:");
	scanf("%f", &marks);
	printf("Enter your attendance:");
	scanf("%f", &attendance);
	
	if(attendance>=75 && marks>=40){
		printf("Congratulations,you are eligible for the exam.");
	}
	else{
		printf("Oops,you are not eligible for the exam.");
	}
	
	
	return 0;
}