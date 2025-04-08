#include<stdio.h>
int main(){
 FILE *fp;
   fp=fopen("file.c","w");//Open the file in the write mode
   putc('A',fp);//write a char into the file
   fclose(fp);//close the file
   fp=fopen("file.c","r");//open in read mode
   char ch=getc(fp);// Read a character from the file
   printf("%c",ch); // Print the character to the console
   fclose(fp);  // Close the file
   return 0;
}
