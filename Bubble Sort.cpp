#include<stdio.h>
int main(){
	int i,j;
	int a[j]={5,3,1,2};
	for(i=0; i<4; i++){
		for(j=0; j<(4-1)-i; i++){
			if(a[j]>a[j+1]){
				a[j+1]=a[j];
			}
		}
	}
	printf("%d ",a[j]);
	return 0;
}