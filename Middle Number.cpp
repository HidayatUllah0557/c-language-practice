#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter three number\n");
	scanf("%d\n%d\n%d",&num1,&num2,&num3);
	if(num2>num1||num2<num3){
		printf("The  middle is number:%d",num2);
	}else if(num1>num2||num1<num3){
		printf("The  middle is number:%d",num1);
	}else if(num3>num2||num3<num1){
		printf("The  middle is number:%d",num3);
	}
	return 0;
}
