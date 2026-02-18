#include<stdio.h>
int main(){
	int num,sum;
	printf("Enter the 3 digts number\n");
	scanf("%d",&num);
	int num1,num2,num3,num4;
	num1=num/100;
	num4=num%100;
	num2=num4/10;
	num3=num4%10;
	sum=(num1*num1*num1)+(num2*num2*num2)+(num3*num3*num3);
	if(sum==num){
		printf("this is amstrong number");
	}else{
		printf("not amstrong number\n");
	}
	return 0;
}
