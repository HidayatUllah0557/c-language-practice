#include<stdio.h>
int main(){
	int num,one,two,three,four,fith,six;
	printf("enter the number of 6 digits\n");
	scanf("%d",&num);
	six=(num%1000)%10;
	fith=(num/10)%10;
	four=(num/100)%10;
	three=(num/1000)%10;
	two=(num/10000)%10;
	one=(num/10000)/10;
	printf("%d%d%d%d%d%d",six,fith,four,three,two,one);
	
	
	return 0;
}
