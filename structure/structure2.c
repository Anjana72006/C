/*Create a structure named Book to store book details like title, author, and price.
 Write a C program to input details for two books, find the most expensive and the lowest priced books,
  and display their information.*/


  #include<stdio.h>
   typedef struct
            { char name[100];
              char author[100];
              int price;
    
            }Book;
  int main(){
    Book book1,book2,expensive,cheap;
    printf("Enter the name of book1");
    fgets(book1.name,sizeof(book1.name),stdin);
    printf("Enter the name of author  of book1");
    fgets(book1.author,sizeof(book1.author),stdin);
    printf("Enter the price  of book1");
    scanf("%d",&book1.price);
    getchar();
    printf("Enter the name of book2");
    fgets(book2.name,sizeof(book2.name),stdin);
    printf("Enter the name of author  of book2");
    fgets(book2.author,sizeof(book2.author),stdin);
    printf("Enter the price  of book2");
    scanf("%d",&book2.price);



    if(book1.price>book2.price){
        expensive=book1;
        cheap=book2;
    }
    else {
        expensive=book2;
         cheap=book1;
    }
  
  

  printf("Expensive book details:%s\n%s\n%d",expensive.name,expensive.author,expensive.price);

    printf("lowest priced book details:%s\n%s\n%d",cheap.name,cheap.author,cheap.price);



    return 0;
}
  

  