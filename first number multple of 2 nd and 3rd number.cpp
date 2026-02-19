#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the num1,num2,num3\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num2%num1==0 && num3%num1==0){
		printf("Num1 is multiple of num2,num3\n");
	}else{
		printf("Num is not multiple of num2,num3");
	}
	return 0;
}
