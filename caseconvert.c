/*Program to read a string and covert all the letters to opposite case*/
#include<stdio.h>
int main(){
char string[100];
printf("Enter the string:");
fgets(string,sizeof(string),stdin);
for(int i=0;string[i]!='\0';i++){
    if(string[i]>='A'&&string[i]<='Z'){
        string[i]=string[i]+32;
    }
    else if(string[i]>='a'&&string[i]<='z'){
        string[i]=string[i]-32;
    }
}
printf("Converted string:\n");
for(int i=0;string[i]!='\0';i++){
    printf("%c",string[i]);
}
return 0;

}
