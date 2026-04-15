#include<stdio.h>
int main(){
	int i,j,k,l;
			for(l=1; l<=5; l++){
			for(k=1; k>l; k++){
				printf(" ");
			}
		}
				for(i=5; i>=1; i--){
			for(j=0; j<=2*i-1; j++){
				printf("%c ", 65+j);
			}
			printf("\n");
		}
	return 0;
}