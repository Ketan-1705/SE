#include <stdio.h>
#include <conio.h>

void main(){
	int i;
	int j=10;
	int a = 0, b = 1, c;
	
	for(i=0;i<j;i++){
		 printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
		
	}
	
	getch();
}
