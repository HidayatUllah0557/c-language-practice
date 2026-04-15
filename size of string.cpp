#include<stdio.h>
#include<string.h>
int main(){
	char name[50];
	printf("Enter the number\n");
	fgets(name,sizeof(name),stdin);
	printf("%s\n",name);
	printf("%d",strlen(name));
	return 0;
}