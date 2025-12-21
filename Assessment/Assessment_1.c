//Create menu driven calculator using function 

#include <stdio.h>
#include <conio.h>

void main(){
	printf("\n1. Addition");
	printf("\n2. Substraciton");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	
	float a,b,sum,sub,mul,div;
	int data;
	
	printf("\nEnter Your choice : ");
	scanf("%d",&data);
	
//	printf("\n%.2f",a);

switch(data){
	case 1:
			printf("\nEnter value 1 :");
			scanf("%f",&a);
			
			printf("\nEnter value 2 :");
			scanf("%f",&b);
			sum = a+b;
			printf("\n Addition : %.2f",sum);
		break;
		
		case 2:
			printf("\nEnter value 1 :");
			scanf("%f",&a);
			
			printf("\nEnter value 2 :");
			scanf("%f",&b);
			sub = a-b;
			printf("\n Substraciton : %.2f",sub);
		break;
		
		case 3:
			printf("\nEnter value 1 :");
			scanf("%f",&a);
			
			printf("\nEnter value 2 :");
			scanf("%f",&b);
			mul = a*b;
			printf("\n Multiplication : %.2f",mul);
		break;
		
		case 4:
			printf("\nEnter value 1 :");
			scanf("%f",&a);
			
			printf("\nEnter value 2 :");
			scanf("%f",&b);
			div = a/b;
			printf("\n Division : %.2f",div);
		break;
		
		default:
			printf("\n Invalid choice....");
		break;	
	}
	getch();
}
