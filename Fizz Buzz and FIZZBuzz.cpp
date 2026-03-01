#include<stdio.h>
int main(){
	int start=1,end=15,i;
	int count1=0,count2=0,count3=0;
	int fizz=0,Buzz=0,fizz_buzz=0;
		for(i=1; i<=end; i++){
		if(i%3==0){
			count1++;
		}
		 if(i%5==0){
			count2++;
		}
		 if(i%3==0 && i%5==0){
			count3++;
		}
	}	printf("%d\n",count1);
	    printf("%d\n",count2);
	    printf("%d",count3);
		return 0;
}
