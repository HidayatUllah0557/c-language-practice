#include<stdio.h>
int main(){
	int i,n;
	int a[5]={1,2,3,4,5};
	for(i=0; i<5; i++){
		a[i]=a[i]*a[i];
		printf("%d ",a[i]);
	}
	return 0;
}