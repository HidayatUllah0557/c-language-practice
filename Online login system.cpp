#include<stdio.h>
#include<stdlib.h>
int main(){
	 int pass=12345,i,passowrd;
     char u;
     int count=0;
     for(i=1; i<=3; i++){
     printf("Enter the user\n");
	 scanf(" %c",&u);
	 printf("Enter the passoword\n");
	 scanf("%d",&passowrd);
	 if(passowrd==pass&& u=='a'){
	 	printf("login successful");
	 	exit(0);
	 }else {
	 	printf("trying again\n");
	 	count++;
	 }
	 }
	 if(count==3){
	 	printf("ligin fail");
	 }
	return 0;
}