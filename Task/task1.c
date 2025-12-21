#include<stdio.h>
#include<conio.h>

void main(){
	int i;
	printf("This s Even number :");
	for(i=1;i<=10;i++){
		if(!(i % 2)){
			printf("\n%d",i);
		}
	}
	printf("This s odd number :");
	for(i=1;i<=10;i++){
		if(i % 2){
			printf("\n%d",i);
		}
	}
	getch();
}
