#include<stdio.h>
int main(){
int num,sum=0,rem,temp;
printf("Enter the number");
scanf("%d",&num);
temp=num;
while(temp!=0){
   rem=temp%10;
   sum=sum+(rem*rem*rem);
   temp=temp/10;
}
if(sum==num){
    printf("The given number is an armstrong number");
}
else{
    printf("The given number is not an armstrong number");
}
return 0;
}


