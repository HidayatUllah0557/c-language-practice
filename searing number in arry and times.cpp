#include<stdio.h>
int main(){
	int m,num,i;
	int count=0;
	printf("Enter the number for m\n");
	scanf("%d",&m);
	int a[m];
	for(i=0; i<m; i++){
		printf("Enter the number\n");
		scanf("%d",&a[i]);
	}
	printf("Enter the number for searching in arry\n");
	scanf("%d",&num);
	for(i=0; i<m; i++){
	    if(num==a[i]){
	    	printf("the number is: %d\n",a[i]);
	    	count++;
		}
	}
	printf("The number times: %d",count);
	return 0;
}