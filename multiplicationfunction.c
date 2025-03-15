/*Program that defines multiply() which takes two integers as parameters and returns their product*/
#include<stdio.h>
int multiply(int n1,int n2);
int main(){
int n1,n2;
printf("Enter the numbers:");
scanf("%d%d",&n1,&n2);
multiply(n1,n2);
printf("Product=%d",n1*n2);
return 0;
}


int multiply(int n1,int n2){
    return n1*n2;
}
