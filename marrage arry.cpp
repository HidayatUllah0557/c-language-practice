#include<stdio.h>
int main(){
	int m,i;
	printf("Enter the value for m\n");
	scanf("%d",&m);
	int a[m],b[m],c[m];
	int n=0;
	for(i=0; i<m; i++){
		printf("Enter the number %d\n", i+1);
		scanf("%d",&a[i]);
	}
	for(i=0; i<m; i++){
		printf("Enter the number %d\n", i+1);
		scanf("%d",&b[i]);
	}for(i=0; i<m; i++)
    c[i]=a[i];
for(i=0; i<m; i++)
    c[m+i]=b[i];
    for(i = 0; i < 2*m; i++){
    printf(" %d", c[i]);
}
	return 0;
}