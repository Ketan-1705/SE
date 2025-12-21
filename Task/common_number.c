#include<stdio.h>
#include<conio.h>

void main(){
	float a,b,c;
	printf("Enter velue 1 :");
	scanf("%f",&a);
	
	printf("Enter velue 2 :");
	scanf("%f",&b);
	
	printf("Enter velue 3 :");
	scanf("%f",&c);
	
	float sum = a+b+c;
	float dev = sum/3;
	
	printf("Common Number is : %.2f",dev);
	getch();
}
