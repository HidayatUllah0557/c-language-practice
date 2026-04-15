#include<stdio.h>
int main(){
	int num=0,i,j;
	int m,n;
	printf("Enter the m and n\n");
	scanf("%d%d",&m,&n);
		int a[m][n];
	for(i=0; i<m; i++){
		printf("Enter the number of row: %d\n", i+1);
		for(j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}for(i=0; i<m; i++){
		for(j=0; j<n-1; j++){
			if(a[i][j]>=a[i][j+1]){
            num=a[i][j];
        }else{
        	num=a[i][j+1];
		}
            
		}
		printf("The maximum number of each row: %d\n",a[i][j]);
	}
	printf("The maximum number: %d\n",num);
	for(i=0; i<1; i++){
		for(j=0; j<1; j++){
		if(a[i][j]>=a[i+1][j+1]){
		printf("The number is greater in digonals: %d\n",a[i][j]);
		}if(a[i][j+1]>=a[i+1][j]){
		printf("The number is greater in digonals: %d",a[i][j]);
		}
	}
	}
	return 0;
}