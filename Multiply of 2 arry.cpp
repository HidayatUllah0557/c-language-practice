#include<stdio.h>
int main(){
	int m,n,l,q,k,i,j;
	printf("Enter the m and and n\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0; i<m; i++){
		printf("Enter the number:  %d\n",i+1);
		for(j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the q and l\n");
	scanf("%d%d",&q,&l);
	int b[q][l];
		for(i=0; i<q; i++){
			printf("Enter the number:  %d\n",i+1);
		for(j=0; j<l; j++){
			scanf("%d",&b[i][j]);
		}
	}
		int reslt[m][l];
	if(n!=q){
		printf("The row can multiply\n");
	}else {
		for(i=0; i<m; i++){
			for(j=0; j<l; j++){
				reslt[i][j]=0;
				for(k=0; k<n; k++){
					reslt[i][j]+=a[i][k]*b[k][j];
				}
						}
		}
		
	}	for(i=0; i<m; i++){
			for(j=0; j<l; j++){
			 printf("%d ", reslt[i][j]);
						}
			printf("\n");
		}
	
		return 0;
}