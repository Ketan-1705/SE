#include <stdio.h>
#include <conio.h>
int loopsum(int n){
	int a[5]={1,2,3,4,5};
	int i, sum = 0;
	for(i=0;i<=4;i++){
		sum+=a[i];
	}
	return sum;
}
int main(){
	int sum;
		printf("sum : %d",loopsum(sum));
	
}
