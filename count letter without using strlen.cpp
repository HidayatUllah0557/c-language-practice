#include<stdio.h>
int main(){
	int  i;
	int count=0;
	char a[50]="hidayat ullah";
     for(i=0; a[i]!='\0'; i++){
     	count++;
	 }
	 printf("%d",count);
	return 0;
}