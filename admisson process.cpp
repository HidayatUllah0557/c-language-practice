#include<stdio.h>
int main(){
	int mcqs;
	float percantage;
	printf("Enter the correct MCQS in 5 qestion:\n");
	scanf("%d",&mcqs);
	percantage=(mcqs/5.0)*100;
	if(mcqs>=1&&mcqs<=5&&percantage>=60){
		printf("The admisson is done");
	}else {
		printf("Not do adimmsion");
	}
	return 0;
}
