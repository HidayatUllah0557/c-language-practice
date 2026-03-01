#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
int attempts=0;
int guess;
srand(time(0));
int secret=rand()%50+1;
while(attempts<5){
printf("Enter your guess:");
scanf("%d",&guess);
attempts++;
if(guess==secret){
printf("Correct!\n");
return 0;
}
}
printf("FAILED\n");
return 0;
}
