#include<stdio.h>
int main(){
	int i,temp;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0; i<5; i++){
			temp=a[2*i+1];
			a[2*i+1]=a[2*i];
			a[2*i]=temp;
	}
	for(i=0; i<10; i++){
		printf("%d ",a[i]);
	}
	return 0;
}