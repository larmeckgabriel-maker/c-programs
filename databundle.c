/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
Description:C program for data purchase
*/
#include<stdio.h>

int main(){
	int option;
	
	printf("SELECT DATA BUNDLE\n");
	printf(" 1. 100MB @ 50KES\n");
    printf(" 2. 500MB @ 200KES\n");
    printf(" 3. 1GB   @ 350KES\n");
 	printf(" 4. 2GB   @ 600KES\n");
 	printf("---------------------\n");
    
	//user input
	printf("Enter your choice(1-4)");
    scanf("%d", &option);
    
    switch (option){
		case 1:
		printf("You selected 100MB cost = 50KES\n");
		break;
	
		case 2:
		printf("You selected 500MB cost = 200KES\n");
		break;
	
		case 3:
		printf("You selected 1GB cost = 350KES\n");
		break;
	
		case 4:
		printf("You selected 2GB cost = 600KES\n");
		break;
	
		default:
		printf("Invalid choice.");
		break;
	}
	printf("---------------------");
	
	return 0;
}