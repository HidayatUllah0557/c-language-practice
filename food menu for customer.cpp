#include<stdio.h>
#include<stdlib.h>
int main(){
	char choice;
	int bill1=0,bill2=0,bill3=0,total_bill;
	char box;
	while(1){
		printf("1.rice and price=300\n");
		printf("2.sugar and price=500\n");
		printf("3.milk and price=400\n");
		printf("Enter the choice\n");
		scanf(" %c",&choice);
		if(choice=='1'){
				bill1+=300;
			 printf("Do you want more(Y or N)\n");
			scanf(" %c",&box);
			if(box=='Y'){
				continue;
			}else if(box=='N'){
				break;
			}
			 }else	if(choice=='2'){
				bill1+=500;
			 printf("Do you want more(Y or N)\n");
			scanf(" %c",&box);
			if(box=='Y'){
				continue;
			}else if(box=='N'){
				break;
			}
			 }	
		 else if(choice=='3'){
				bill1+=400;
			 printf("Do you want more(Y or N)\n");
			scanf(" %c",&box);
			if(box=='Y'){
				continue;
			}else if(box=='N'){
				break;
			}
			 }
		}
			 total_bill=bill1+bill2+bill3;
			 printf("The Total bill is=%d",total_bill);	
	
	return 0;
}
