#include<stdio.h>
#include<string.h>
int main(){
	int i;
	int a[50]="hidayat";
	for(i=0; i<strlen(a); i++){
		if(a[i]==strlen(a)-i){
			printf("the word is plodrome\n");
		}
	}for(i=0; i<strlen(a); i++){
		if(a[i]==strlen(a)-i){
			printf("the word is plodrome\n");
		}
	}
	return 0;
}

