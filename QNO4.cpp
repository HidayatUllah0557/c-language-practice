#include<stdio.h>
int main(){
	int num,first,second,third;
	printf("Enter the number\n");
	scanf("%d",&num);
	first=(num/100);
	second=(num%100)/10;
	third=(num%100)%10;
	if(first==third){
		printf("the word is palindrome\n");
	}else {
		printf("the word is not plindrome");
	}
	return 0;
}
