#include<stdio.h>
void checkoddeven(int n);
int main(){
    int n;
printf("Enter the number to be checked:");
scanf("%d",&n);
checkoddeven(n);
return 0;
}
void checkoddeven(int n){
if(n%2==0){
    printf("Even");
}
else{
    printf("Odd");
}
}
