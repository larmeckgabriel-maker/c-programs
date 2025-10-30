/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
DEscription:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 int main(){
	 int chain[3][5][10];
	 int b,f,r,sum;
	 
	 srand(time(NULL));
	 
	 for(b=0;b<3;b++){
		 printf("Branch %d", b+1);
		 for(f=0;f<5;f++){
			 printf("\tFloor %d\n", f+1);
			 for(r=0;r<10;r++){
				 if(chain[3][5][10]=rand()%2){
					 printf("\t\t Occupied \n");
					 sum=sum+1;
				 }
				 else{
					 printf("\t\t vacant \n");
				 }
			 }
		 }
	 }
	 printf("\n The total number of occupied rooms is %d\n", sum);
	 return 0;
 }