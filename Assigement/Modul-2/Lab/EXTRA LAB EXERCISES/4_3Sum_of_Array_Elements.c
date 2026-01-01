//Write a C program that takes N numbers from the user and stores them in an array. The 
//program should then calculate and display the sum of all array elements. 
//Challenge: Modify the program to also find the average of the numbers.

#include <stdio.h>
#include <conio.h>

int main(){
	int n;
	printf("Enter N number :");
	scanf("%d",&n);
	
	int a[n],i,sum=0,ever;
	
	for(i=0;i<n;i++){
		printf("Enter value :");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		printf("%d : a[%d]\n",i,a[i]);
		sum=sum+a[i];
	}
	printf("\nSum : %d",sum);
	ever=sum/n;
	printf("\nAverage : %d",ever);
	
	return 0;
}
