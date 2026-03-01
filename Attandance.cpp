#include<stdio.h>
int main(){
	int student=15;
	int i5;
	int i;
	char ab;
	for(i=1; i<student; i++){
		printf("Enter the stutas(A,P)\n");
	scanf(" %c",&ab);
	if(ab=='P'){
		printf("the role number is:   %d\n",i*55);
	}else if(ab=='A'){
		continue;
	}
}
	return 0;
}
