#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("Enter your A : ");
	scanf("%d",&a);
	printf("Enter your B : ");
	scanf("%d",&b);
	printf("Enter your C : ");
	scanf("%d",&c);
	
//	80 100 110
	if(a>b && a>c){
		printf("a");
	}
	else if(b>a && b>c){
		printf("b");
	}
	else{
		printf("c");
	}
		
	
	getch();
}
