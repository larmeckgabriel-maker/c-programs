/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
Description:
*/

#include <stdio.h>

int main(){
	int i,average;
	int sum=0;
	int revenue[7]={15900,21000,23550,2240,25600,23600,22700};
	for(i=0;i<7;i++){
		printf("%d\n", revenue[i]);
		sum=sum +revenue[i] ;
		average=sum/7;
	}
	printf("The total weekly revenue is %d\n", sum);
	printf("The average daily revenue is %d", average);
	return 0;
}