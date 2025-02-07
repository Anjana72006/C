#include<stdio.h>
int main(){
int row,col,sum=0;
printf("Enter the number of rows and columns:");
scanf("%d%d",&row,&col);
printf("Enter the elements");
int matrix[row][col];
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
scanf("%d",&matrix[i][j]);
}}
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
if(i==j){
printf("%d\t",matrix[i][j]);
}
}}
return 0;
}
