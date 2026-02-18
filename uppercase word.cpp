#include<stdio.h>
int main(){
	char  n;
	printf("Enter the alphate\n");
	scanf("%c",&n);
	int d2;
	d2=n;
	if(d2>=65&&d2<=90){
		printf("the upper case alphate\n");
	}else if(d2>=97&&d2<=122){
		printf("the lower case alphate\n");
	}else{
		printf("invlide input\n");
	}
	return 0;
}
