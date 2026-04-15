#include<stdio.h>
int main(){
	int i,j,k,l,m;
	printf("    *\n");
	for(i=0; i<4; i++){
	for(j=4; j>1; j--){
		printf(" ");
	}
		for(l=1; l<=i+1; l++){
			printf("*");
		}
	for(k=1; k<=3*i+i+1; k++){
		printf(" ");
	}
	for(m=0; m<i+1; m++){
			printf("*");
		}
		printf("\n");
}
	return 0;
}