//Write a C program that generates the Fibonacci sequence up to N terms using a recursive function. 
// Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative 
//and recursive methods. Compare their efficiency. 

#include <stdio.h>
#include <conio.h>

int fibo(int n){
	int a=0,b=1,c,i;
	for(i=0;i<=n;i++){
		c = a + b;
        a = b;
        b = c;
        
        printf("%d ", c);
	}
	return b;
}

void main(){
	int n;
	printf("Enter n: ");
    scanf("%d", &n);

	printf("\nFibonacci sequence:\n");
    fibo(n);
	getch();
}
