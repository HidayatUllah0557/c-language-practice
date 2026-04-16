#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the value for n\n");
	scanf("%d",&n);
	int fact=1;
	int a[n];
	for(i=0; i<n; i++){
	 printf("Enter the number: %d.\n", i+1);
	 scanf("%d",&a[i]);
	}for(i=0; i<n/2; i++){
      if(a[i]==a[n-1-i]){
      	fact=0;
	  }
	}
	if(fact=0){
		printf("The arry is same in reverse order\n");
	}else{
		printf("The arry is not  same\n");
	}
	return 0;
}