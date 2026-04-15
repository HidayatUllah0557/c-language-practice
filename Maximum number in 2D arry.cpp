#include<stdio.h>
int main(){
	int i,j;
	int a[5][5];
	int num=0;
	for(i=0; i<5; i++){
		printf("Enter the number for row: %d.\n", i+1);
		for(j=0; j<5; j++){
	      scanf("%d",&a[i][j]);
		}
	}for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(a[i][j]>a[i+1][j+1]){
				num=a[i][j];
			}
	}
	}
	printf("%d\n",num);
	return 0;
}