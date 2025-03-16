/*Program to sort names in alphabetic order*/
#include<stdio.h>
#include<string.h>
int main(){
int limit;
printf("Enter the number of names:");
scanf("%d",&limit);
printf("Enter %d names:",limit);
char name[limit][100];
for(int i=0;i<limit;i++){
        scanf("%s",&name[i]);

}

for(int i=0;i<limit-1;i++){
        for(int j=i+1;j<limit;j++){
            if(strcmp(name[i],name[j])>0){
                char temp[100];
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
}
printf("Name in alphabetic order:\n");
for(int i=0;i<limit;i++){
    printf("%s\n",name[i]);
}
return 0;



}
