#include <stdio.h>
#include <conio.h>

void main(){
	int a[2][2],i,j;
	int b[2][2], sum[2][2];
	printf("Enter A value\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Eeter %d : row %d : col : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter A value\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter %d : row %d : col :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nvalue A");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n a[%d][%d] : %d",i,j,a[i][j]);
		}
	}
	printf("\nvalue B");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n b[%d][%d] : %d",i,j,b[i][j]);
		}
	}
	
	printf("\n Sum Of A + B : ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n sum[%d][%d] : %d",i,j,sum[i][j]);
		}
	}
	
	
	getch();
}
