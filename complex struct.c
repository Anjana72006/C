#include<stdio.h>
typedef struct{
       float real;
       float imag;
       }complex;
complex add(complex a,complex b){
       complex result;
       result.real=a.real+b.real;
       result.imag=a.imag+b.imag;
       return result;
  }
  int main(){
  complex a,b,result;  
  printf("\n Enter the real and imaginary part of 1st number");
  scanf("%f%f",&a.real,&a.imag);
  printf("\n Enter the real and imaginary part of 2nd number");
   scanf("%f%f",&b.real,&b.imag);
   result=add(a,b);
   printf("\n The result=%.2f + %.2fi",result.real,result.imag);
   return 0;
   }
