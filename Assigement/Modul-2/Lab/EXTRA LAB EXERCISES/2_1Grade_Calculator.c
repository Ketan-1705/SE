/*
Write a C program that takes the marks of a student as input and displays the corresponding
grade based on the following conditions:
 Marks > 90: Grade A
 Marks > 75 and <= 90: Grade B
 Marks > 50 and <= 75: Grade C
 Marks <= 50: Grade D
 Use if-else or switch statements for the decision-making process.
*/

#include <stdio.h>
#include <conio.h>

void main(){
	float marks,a,b,c;
	float totals;
	
	printf("\nEnter subject marks 1:");
	scanf("%f",&a);
	
	printf("\nEnter subject marks 1:");
	scanf("%f",&b);
	
	printf("\nEnter subject marks 1:");
	scanf("%f",&c);
	
	totals=((a+b+c)*100)/300;
	printf("\nTOTAL : %.2f",totals);
	
	
	if(totals>100 || totals<0){
		printf("\n Invalid number");
	}
	else if(totals>90){
		printf("\nGrade A");
	}
	else if(totals > 75 && marks <= 90){
		printf("\nGrade B");
	}
	else if(totals > 50 && marks <= 75){
		printf("\nGrade C");
	}
	else if(totals > 35 && marks <= 50){
		printf("\nGrade D");
	}
	else{
		printf("\nFAIL....");
	}
	
	getch();
}
