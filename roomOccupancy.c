/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
Description:
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int occupancy[5][10],i,r;
	
	
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		printf("floor %d\n", i+1);
		for(r=0;r<10;r++){
			if(occupancy[i][r]=rand()%2){
				printf("\t occupied\n");
			}
			else
				{
				printf("\t vacant\n");	
				}
			
		}
	}
	
	
	return 0;
}