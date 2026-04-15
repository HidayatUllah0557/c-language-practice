#include<stdio.h>
int main(){
	int m,n,i,j;
	int a[m][n];
	printf("Enter the number\n");
	scanf("%d",&m);
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=0; i<=n; i++){
		for(j=0; j<=m; j++){
			scanf("%d",&a[m][n]);
		}
	}
	for(i=0; i<=n; i++){
		for(j=0; j<=m; j++){
			printf("%d",a[m][n]);
		}
	}
	return 0;
}
