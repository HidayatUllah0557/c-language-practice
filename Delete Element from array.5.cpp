#include<stdio.h>
int main(){
    int n,i,val,pos,arr[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to delete\n");
    scanf("%d",&val);
    pos=-1;
    for(i=0;i<n;i++){
        if(arr[i]==val){
            pos=i;
            break;
        }
    }
    if(pos!=-1){
        for(i=pos;i<n-1;i++)
            arr[i]=arr[i+1];
        n--;
    }
    printf("Array after deletion\n");
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    return 0;
}