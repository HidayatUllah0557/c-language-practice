#include<stdio.h>
int main(){
	float HRA=20,DA=80,hra,da;
	float salery,gross;
	printf("Enter  the salery\n");
	scanf("%f",&salery);
	if(salery>=0&&salery<=1000){
		hra=salery*(HRA/100);
		da=salery*(DA/100);
		gross=salery+da+hra;
		printf("The gross salery:%f\n",gross);
	} else if(salery>=1000&&salery<=2000){
		hra=salery*(HRA/100);
		da=salery*(DA/100);
		gross=salery+da+hra;
		printf("The gross salery:%f\n",gross);
	}if(salery>=20000){
		hra=salery*(HRA/100);
		da=salery*(DA/100);
		gross=salery+da+hra;
		printf("The gross salery:%f\n",gross);
	}
	
	return 0;
}
