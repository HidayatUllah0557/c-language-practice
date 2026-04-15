#include<stdio.h>
int main(){
	int i,j,temp;
	int a[5]={3,2,1,5,4};
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
}
		for(j=0; j<5; j++){
			printf("%d ",a[j]);
		}
	return 0;
}