//If a three-digit number is entered, write a program to check
// whether it is an Armstrong number or not.
#include<stdio.h>
int main(){
	int num,first,second,third,Armstrong;
	printf("Enter the number\n");
	scanf("%d",&num);
	first=(num/100);
	second=(num%100)%10;
	third=(num%100)/10;
	Armstrong=first*first*first+second*second*second+third*third*third;
	if(Armstrong==num){
		printf("Armstrong number\n");
	}else{
		printf("Not Armstrong number");
	}
	return 0;
}
