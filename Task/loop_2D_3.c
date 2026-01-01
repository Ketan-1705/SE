#include <stdio.h>
#include <conio.h>

void main(){
	int a[3][3],i,j;
	int b[3][3], sub[3][3];
	int c[3][3];
	printf("Enter A value\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Eeter %d : row %d : col : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter B value\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter %d : row %d : col :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Enter C value\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter %d : row %d : col :",i,j);
			scanf("%d",&c[i][j]);
		}
	}
	
	printf("\nvalue A");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n a[%d][%d] : %d",i,j,a[i][j]);
		}
	}
	printf("\nvalue B");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n b[%d][%d] : %d",i,j,b[i][j]);
		}
	}
	
	printf("\nvalue C");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n b[%d][%d] : %d",i,j,b[i][j]);
		}
	}
	
	printf("\n Sum Of A - B : ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sub[i][j] = a[i][j] - b[i][j] - c[i][j] ;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n sub[%d][%d] : %d",i,j,sub[i][j]);
		}
	}
	
	
	getch();
}
