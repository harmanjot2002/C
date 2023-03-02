//WAP to accept details(serial no.,book name,author name,isbn no.,price) from librarian based on the no. of books that is available in the library.
/*
#include<stdio.h>
#include<string.h>

struct Lib{
    int serial,isbn,price;
    char book[100],author[100];
};

int main(){
    int n;
    printf("Enter the number of books\n");
    scanf("%d",&n);
    struct Lib books[n];
    char name[100],author[100];
    for (int i = 0; i < n; i++){
        printf("\nEnter the %d book serial number: ",i);
        scanf("%d",&books[i].serial);
        printf("Enter the %d book name : ",i );
        gets(name);
        gets(name);
        strcpy(books[i].book,name);
        printf("Enter the %d book author name : ",i );
        gets(author);
        strcpy(books[i].author,author);
        printf("Enter the %d book ISBN number: ",i);
        scanf("%d",&books[i].isbn);
        printf("Enter the %d book price: ",i);
        scanf("%d",&books[i].price);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nbook serial number is : %d\n",books[i].serial);
        printf("book Name is : %s\n",books[i].book);
        printf("book Author Name is : %s\n",books[i].author);
        printf("book isbn number is : %d\n",books[i].isbn);
        printf("book price is : %d\n",books[i].price);
    }
    
}
*/

