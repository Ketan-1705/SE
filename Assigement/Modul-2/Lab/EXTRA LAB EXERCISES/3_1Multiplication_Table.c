//Write a C program that takes an integer input from the user and prints its multiplication
//table using a for loop.
// Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).

//1x1=1
//1x2=2

#include <stdio.h>
#include <conio.h>

void main(){
	int num,reng,i;
	
	printf("Enter Number :");
	scanf("%d",&num);
	
	printf("enter range :");
	scanf("%d",&reng);
	
	for(i=1;i<=reng;i++){
		printf("%d X %d = %d \n",num,i,num*i);
	}
getch();

}
