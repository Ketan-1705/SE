#include <stdio.h>
#include <conio.h>

void main(){
	int c,r,s;
	for(r=0;r<=5;r++){
		for(s=0;r>=s*r;s--){
			for(c=1;c<=r;c++){
				printf(" ");
			}
			printf(" *");
		}
		
	}
		getch();
}
