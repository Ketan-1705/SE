//Write a C program that implements a simple number guessing game. The program should 
//generate a random number between 1 and 100, and the user should guess the number 
//within a limited number of attempts. 
//Challenge: Provide hints to the user if the guessed number is too high or too low.

#include <stdio.h>
#include <conio.h>

void main(){
	int a=50,i,b;
	for(i=1;i<=5;i++){
		printf("\nGues the number :");
		scanf("%d",&b);
		if(b<0 || b>100){
			printf("Guss only 1 to 100..");
		}
		else if(b>0 && b<25){
			printf("guessed number is to low..");
		}
		else if(b>=25 && b<=49){
			printf("guessed number is to close..");
		}
		else if(b>=51 && b<=75){
			printf("guessed number is some high..");
		}
		else if(b>=76 && b<=100){
			printf("guessed number is to high..");
		}
		else{
			printf("guessed number is currect..");
			break;
		}
	}
	getch();
}
