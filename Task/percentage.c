#include<stdio.h>
#include<conio.h>

void main(){
	float a,b,c,total;
	
	printf("Enter 1 Subject Marks :");
	scanf("%f",&a);
	
	printf("Enter 2 Subject Marks :");
	scanf("%f",&b);
	
	printf("Enter 3 Subject Marks :");
	scanf("%f",&c);
	
	printf("Enter Subject Total Marks :");
	scanf("%f",&total);
	
	float sum=a+b+c;
	printf("Sum Total :%f",sum);
	
	float dev=sum/total;
	
	float per=dev*100;
	printf("\n Percentage : %.2f",per);
	
	if(per>100.00 || per<0.00){
		printf("\ninvalid Marks...");
	}
	
	else if(per>=80.00 && per<=100){
		printf("\nA grade student..");
	}
	
	else if(per>=60.00 && per < 80.00){
		printf("\nB grade student..");
	}
	
	else if(per>=45.00 && per < 60.00){
		printf("\nC grade student..");
	}
	else{
		printf("\nFail...");
	}
	getch();
	
}

