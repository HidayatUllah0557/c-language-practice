#include<stdio.h>
int main(){
int present=0;
int absent=0;
int student=15;
int stu,i;
char a,p;
for(i=0; i<student; i++){
printf("Enter the a for present p for absent\n");
scanf(" %c",&stu);
if(stu=='a'){
present=present+1;
}else if(stu=='p'){
absent=absent+1;
}
}
printf("%d\n",present);
printf("%d\n",absent);

return 0;
}
