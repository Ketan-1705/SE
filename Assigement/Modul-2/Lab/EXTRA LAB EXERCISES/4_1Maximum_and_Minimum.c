//Write a C program that accepts 10 integers from the user and stores them in an array. The 
//program should then find and print the maximum and minimum values in the array. 
//Challenge: Extend the program to sort the array in ascending order.

#include <stdio.h>
#include <conio.h>

void main(){
	int a[10];
	int i,j,max,min;
	
	for(i=0;i<10;i++){
		printf("Enter value : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++){
		printf("a[%d] : %d \n",i,a[i]);
	}
	
	
	max=a[0];
	min=a[0];
	for(i=0;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	
	for(i=0;i<10;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("max : %d\n",max);
	printf("min : %d\n",min);
	getch();
} 
