#include<stdio.h>
int mian(){
	int h[100];
	int i,u[i];
	int total=0;
	int count=0;
	float average;
	for(i=1; i<100; i++){
		printf("Enter the hights %d",i);
		scanf("%d",&u[i]);
		total+=u[i];
		count++;
	}
	average=total/count;
	printf("The average value:%f",average);
	return 0;
}