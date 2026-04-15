#include<stdio.h>
int main(){
	int i,j;
	printf("*\n");
	printf("**\n");
	for(i=1; i<=2; i++){
		printf("*");
		for(j=1; j<2*i; j++ ){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(i=0; i<5; i++){
		printf("* ");
	}
	return 0;
}