#include<stdio.h>
int main(){
 FILE *fp1;
 fp1=fopen("count.txt","r");
 char ch;
 int word_count=0,sentence_count=0,line_count=0;
 while(fscanf(fp1,"%c",&ch)==1){
    if(ch==' ' || ch=='.'){
     word_count+=1;
    }
    if(ch=='.'){
      sentence_count+=1;
     }
     
     if(ch=='\n'){
        line_count+=1;
      } 
 }
   fclose(fp1);
   printf("Word Count:%d\n",word_count);
   printf("Sentence count:%d\n",sentence_count);
   printf("Line count:%d\n",line_count);
   return 0;
 }
