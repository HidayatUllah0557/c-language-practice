#include<stdio.h>
int main(){
	int num1,num2,temp;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	temp=num2;
	num2=num1;
	num1=temp;
	printf("%d\n%d",num1,num2);
	return 0;
}
