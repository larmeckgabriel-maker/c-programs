/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
Description:C program for a loan
*/
#include<stdio.h>

int main(){
	int age,income;
	
	//prompt user to input
	printf("Please enter your age:");
	scanf("%d", &age);
	
	printf("Please enter your annual income:");
	scanf("%d", &income);
	
	if (age>=21 && income>=21000){
		printf("Congratulations,you quaify for a loan.\n");
	}
	else{
		printf("Unfortunately,we are uable to offer you a loan.\n");
	}
	
	return 0;
}