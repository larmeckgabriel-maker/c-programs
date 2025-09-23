/*
Name:Larmeck Gabriel
Reg No.:PA106/G/28805/25
Decription:C program to prompt the user to enter their height,ID number and account balance
*/

#include<stdio.h>

int main(){
	float height;
	int ID,ac;
	printf("Please enter your height in feet:");
	scanf("%f", &height);
	
	printf("please enter your ID number:");
	scanf("%d", &ID);	
	
	printf("Please enter your account balance:");
	scanf("%d", &ac);
	
	//output
	printf("Your height is %.1f feet\n", height);
	printf("your ID number is %d\n", ID);
	printf("Your account balance is : %d\n", ac);
	
	return 0;
}