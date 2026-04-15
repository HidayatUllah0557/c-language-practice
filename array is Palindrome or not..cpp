#include<stdio.h>
int main(){
	int n,i,j;
	int fact=0;
	printf("Enter the size of arry\n");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++){
		printf("Enter the element%d\n",i+1);
		scanf("%d",&a[i]);
	}for(i=0; i<n/2; i++){
		if(a[i]==a[n-1-i]){
	    fact=1;
		}else if(a[i]!=a[n-1-i]){
			fact=0;
		}
	}if(fact=1){
		printf("the arry is paldrome\n");
	}else if(fact=0){
		printf("The arry is not paldrome\n");
	}
	return 0;
}