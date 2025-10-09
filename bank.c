/*
Name:Larmeck Gabriel
Reg No.:PA106/G/28805/25
Description:C program to withdraw money
*/
#include <stdio.h>

 int main(){
 	float x=10000,amount;
 	
 	printf("GABRIEL'S AND ASSOCIATES BANK\n");
 	printf("-----------------------------\n");
 	
	 while(x>0){
	 	printf("Your current account balance is %.2f\n", x);
 	printf("Enter amount to withdraw:");
 	scanf("%f", &amount);
 	x=x-amount;//balance	
	 printf("Your account balance is %.2f\n", x);	 
	 }
	
 	
	 return 0;
 }