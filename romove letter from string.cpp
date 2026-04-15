#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char sten[]="Working with strings is fun";
	printf("%d",strlen(sten));
	for(i=0; i<strlen(sten); i++){
		if(sten[i+3]>0){
			puts(sten);
		}
	}
	return 0;
}