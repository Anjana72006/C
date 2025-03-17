/*Write a c function named iseven that takes an integer as input and returns 1 if the  number is even.*/

#include<stdio.h>
int iseven(int n);
int main(){
int n,result;
printf("Enter the number:");
scanf("%d",&n);
result=iseven(n);
if(result==1){
printf("Even");
}
else{
printf("Odd");
}
return 0;
}

int iseven(int n){
if(n%2!=0){
return 0;
}
else{
return 1;
}
}


