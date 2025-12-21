#include<stdio.h>
#include<conio.h>

void main(){
	int a;
//		for(a=1;a<=10;a++){
//			if(!(a<=3 || 8<=a)){
//				printf("\nA : %d",a);
//			}
//		}

		for(a=1;a<=10;a++){
			if(a<=3 || 8<=a){
				printf("\nA : %d",a);
			}
		}
	getch();
}
