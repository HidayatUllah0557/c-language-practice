#include<stdio.h>
int main(){
	int m,n,i,j;
	printf("Enter the value of m row n colume\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	int  b[m][n];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
		  b[i][j]=a[i][j];
		  printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}