#include<stdio.h>
int main(){
	int i,j,k,l,m,b;
	printf("    *\n");
	for(i=1; i<=4; i++){
		for(j=0; j<4-i; j++){
			printf(" ");
		}
		printf("*");
		for(k=0; k<2*i-1; k++){
			printf(" ");
		}
		printf("*\n");
	}for(l=0; l<3; l++){
		for(b=1; b<=l+1; b++){
			printf(" ");
		}
		printf("*");
		for(m=0; m<5-2*l; m++){
			printf(" ");
		}
		printf("*\n");
	}
	printf("    *");
	return 0;
}