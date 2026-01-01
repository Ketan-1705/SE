//Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
//153 = 1^3 + 5^3 + 3^3).
//? Challenge: Write a program to find all Armstrong numbers between 1 and 1000.

#include <stdio.h>
#include <conio.h>

void main(){
	int num,temp,re,armNum=0,i;

	
	printf("Enter Number :");
	scanf("%d",&num);
	
	while(num != 0){
		re=num%10;
		armNum+=re*re*re;
		num=num/10;
	}
	if(num==armNum){
		printf("\n %d is  Armstrong Number...",num);
	}
	else{
		printf("\n %d is  not Armstrong Number...",num);
	}
	printf("\n Armstrong numbers between 1 and 1000 :");
	
	for(i=0;i<=1000;i++){
		temp=i;
		armNum=0;
		
		while(temp != 0){
		re=temp%10;
		armNum+=re*re*re;
		temp=temp/10;
		}
		
		if(armNum == i){
			printf(" %d,",i);
		}
	}
	
	
	getch();
}
