#include<stdio.h>
int main(){
int row,col;
printf("Enter the number of rows and columns");
scanf("%d%d",&row,&col);
printf("Enter the elements");
int matrix[row][col];
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
scanf("%d",&matrix[i][j]);
}}
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("%d\t",matrix[i][j]);
}
printf("\n");
}
printf("Transpose\n");
for(int i=0;i<col;i++){
for(int j=0;j<row;j++){
printf("%d\t",matrix[j][i]);
}
printf("\n");
}
return 0;
}

