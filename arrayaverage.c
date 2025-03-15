#include<stdio.h>
int main(){
int limit,sum=0;
int  average;
printf("Enter the limit:");
scanf("%d",&limit);
int array[100];
printf("Enter the elements:");
for(int i=0;i<limit;i++){
    scanf("%d",&array[i]);
}
for(int i=0;i<limit;i++){
    sum=sum+array[i];
}
average=sum/limit;
printf("Average:%d",average);
return 0;
}
