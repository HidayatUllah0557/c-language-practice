#include<stdio.h>
#include<string.h>
int main(){
	int count=0;
	int i;
	char a[50]="hidayat";
	for(i=0; i<strlen(a); i++){
		count++; 
	}
	printf("%d\n",count);
	for(i=count-1; i>=0; i--){
		printf("%c",a[i]);
	}
	return 0;
}