#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	int count=0;
	int i;
	int fact=0;
	printf("Enter the name\n");
	fgets(a,50,stdin);
	for(i=0; i<strlen(a); i++){
		count++;
	}for(i=0; i<strlen(a); i++){
		if(a[i]==a[count-i+1]){
		fact=1;
	}
}
	if(fact=1){
		printf("string is paldrome\n");
	}else{
		printf("not paldrome\n");
	}
	return 0;
}