/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
Description:C program to show water bills
*/
#include<stdio.h>

int main(){
	float units,price;
	
	printf("    WATER BILLS\n");
	printf("-----------------------\n");
	printf("Enter number of units:");
	scanf("%f", &units);
	
	
	if(units>0 && units<=30){
		price=units*20;
		printf("Your total water bill is Ksh %.2f\n", price);
	}
	else if(units>30 && units<=60){
		price=units*25;
		printf("Your total water bill is Ksh %.2f\n", price);
	}
	else if(units>60){
		price=units*30;
		printf("Your total water bill is Ksh %.2f\n", price);
	}
	printf("-----------------------\n");
	
	return 0;
}