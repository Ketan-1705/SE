//Write a C program that takes three numbers from the user and determines:
//o The largest number.
//o The smallest number.
//Challenge: Solve the problem using both if-else and switch-case statements.

#include <stdio.h>
#include <conio.h>

void main(){
	
	int a,b,c,sw;
	printf("\nEnter value A :");
	scanf("%d",&a);
	
	printf("\nEnter value B :");
	scanf("%d",&b);
	
	printf("\nEnter value C :");
	scanf("%d",&c);
	
	
	printf("\n--- Using If-else ---");
	if(a>b && a>c){
		printf("\nA is largest number...");
		sw=1;
	}
	else if(b>a && b>c){
		printf("\nB is largest number...");
		sw=2;
	}
	else{
		printf("\nC is largest number...");
		sw=3;
	}
	
	if(a<b && a<c){
		printf("\nA is smallest number...");
		sw=4;
	}
	else if(b<a && b<c){
		printf("\nB is smallest number...");
		sw=5;
	}
	else{
		printf("\nC is smallest number...");
		sw=6;
	}
	
	
	
	switch(sw){
	case 1:
		printf("\n switch-case A is largest");
	break;
	
	case 2:
		printf("\n switch-case B is largest ");
	break;
	
	case 3:
		printf("\n switch-case C is largest ");
	break;
	case 4:
		printf("\n switch-case A is smallest ");
	break;
	case 5:
		printf("\n switch-case B is smallest ");
	break;
	case 6:
		printf("\n switch-case C is smallest ");
	break;
	default:
		printf("\n not vailid:");
	break;
}
getch();
}


