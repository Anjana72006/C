#include<stdio.h>
int main(){
int n,i,j,a=1;
printf("Enter the number of lines:");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
printf("%d",a%2);
a++;
}
printf("\n");
}
return 0;
}


