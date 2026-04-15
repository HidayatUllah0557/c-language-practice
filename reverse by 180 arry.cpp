#include<stdio.h>
int main(){
	int i,j;
	int a[3][3];
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=2; i>=0; i--){
		for(j=0; j<=2; j++){
			printf("%d", a[i][2-j]);
		}
		printf("\n");
	}
	return 0;
}