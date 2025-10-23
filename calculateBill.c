/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
Description:C program to calculate electicity bill
*/

#include <stdio.h>

int calculateBill(int units){
	int bill;
	
		if(units<=100){
		bill= units * 10;
	    }
	    else if(units<=200){
      		bill= (100 * 10) + ((units - 100)* 15);
	    }
	    else{
    		bill= (100 * 10) + ((units - 100)* 15) + ((units - 200)* 20);
    	}
	
	return bill;
}

int main(){
	int units;
	
	printf("Enter number of units consumed:");
	scanf("%d", &units);
	
	int total = calculateBill(units);
	printf("Total electicity bill is Ksh %d\n", total);
	
	return 0;
}