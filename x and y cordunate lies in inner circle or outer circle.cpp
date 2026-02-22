#include<stdio.h>
#include<math.h>
int main(){
int x1,y2,r;
int x=0,y=0;
float distance;
printf("Enter the x cordinate\n");
scanf("%d\n%d",&x1,&y2);
printf("Enter the inner circule radius\n");
scanf("%d",&r);
distance=sqrt((x1-x)+(y2-y));
if(distance<=r){
	printf("The x and y lines in inner circle\n");
}else{
	printf("The x and y lines in outer circle");
}
	return 0;
}
