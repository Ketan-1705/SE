#include <stdio.h>
#include <conio.h>

int main(){
	int a[4];
	
	int i,j=0,temp;
	for(i=0;i<=4;i++){
		printf("Enter data : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++){	
		printf("%d[%d]\n",i,a[i]);
		j+=a[i];
//		j=j+a[i];
	}
	printf("\ntotal sum is : %d",j);
	printf("\nbubble sort : ");
	
	for(i=0;i<=4;i++){
		for(j=i+1;j<=4;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
	}
	
	for(i=0;i<=4;i++){
		printf("\na[%d] : %d",i,a[i]);
	}
	return 0;
}
