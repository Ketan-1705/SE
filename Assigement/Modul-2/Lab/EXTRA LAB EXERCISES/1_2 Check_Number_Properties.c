//Write a C program that takes an integer from the user and checks the following using 
//different operators: 
// Whether the number is even or odd. 
// Whether the number is positive, negative, or zero. 
// Whether the number is a multiple of both 3 and 5.

#include <stdio.h>
#include <conio.h> 

void main(){
	int a;
	printf("Enter a Number :");
	scanf("%d",&a);
	printf("\n-----Whether the number is even or odd.-----\n");
	if(a%2 == 0){
		printf("\nNumber is Even...");
	}
	else{
		printf("\nNumber is Odd...");
	}
	
	printf("\n-----Whether the number is positive, negative, or zero.-----\n");
	
	if(a>0){
		printf("\nNumber is Positive....");
	}
	else if(a<0){
		printf("\nNumber is Negative....");
	}
	else{
		printf("\nNumber is Zero....");
	}
	
	printf("\n-----Whether the number is a multiple of both 3 and 5.-----\n");
	
	if(a % 3 == 0 && a % 5 == 0){
		printf("\nThe number is a multiple of both 3 and 5");
	}
	else{
		printf("\nThe number is not a multiple of both 3 and 5");
	}
	getch();
}
