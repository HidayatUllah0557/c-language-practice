#include<stdio.h>
int main(){
	int a,b;
	int total_A,total_B;
	int A,B,year;
	printf("Enter the poplution of A\n");
	scanf("%d",&a);
	printf("Enter the poplution of B\n");
	scanf("%d",&b);
	total_A=2*a;
	total_B=4*b;
	printf("Enter the year\n");
	scanf("%d",&year);
	A=year*total_A;
	B=year*total_B;
	printf("The total poplution of A: %d\n",A);
	printf("The total poplution of B %d",B);
	return 0;
}