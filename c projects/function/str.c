#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books{
    char title[20];
    char author[20];
    char subject[30];
    int id;
    
};

int main(){
   struct books book1;
   struct books book2;
    //book1 
    for(int i=1;i<=4;i++){
    printf("Enter book1 title,author suject and id:%d\n",i);
    scanf("%s%s%s%d",&book1.title[20],&book1.author[20],&book1.subject[30],&book1.id);
    }
    // strcpy(book1.title,"C Programming");
    // strcpy(book1.author,"M.Patrick");
    // strcpy(book1.subject,"C Struct");
    // book1.id=2090;

    //book2
    for(int i=1;i<=4;i++){
     printf("Enter book2 title,author suject and id:%d\n",i);
    scanf("%s%s%s%d",&book2.title[20],&book2.author[20],&book2.subject[30],&book2.id);
    }
    // strcpy(book2.title,"Data structure");
    // strcpy(book2.author,"Fred");
    // strcpy(book2.subject,"Queues");
    // book2.id=2030;

    //book1 descriptions

    printf("Book1 title is:%s\n", book1.title);
    printf("Book1 author is:%s\n", book1.author);
    printf("Book1 subject is:%s\n", book1.subject);
    printf("Book1 id is:%d\n", book1.id);

    //book2 descriptions

    printf("Book2 title is:%s\n", book2.title);
    printf("Book2 author is:%s\n", book2.author);
    printf("Book2 subject is:%s\n", book2.subject);
    printf("Book2 id is:%d\n", book2.id);

    return 0;
}