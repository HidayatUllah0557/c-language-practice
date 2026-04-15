#include<stdio.h>
int main(){
	int i;
	int a[i];
	int total=0;
		for(i=1; i<100; i++){
			printf("Enter the cgpa\n");
	        scanf("%d",&a[i]);
	        	if(a[i]>=0){
	        		total+=a[i];
	        		printf("%d",&total);
		}
	}
	return 0;
}