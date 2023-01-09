#include<stdio.h>
int main(){
    /*
    char name[30];
    printf("Enter name: ");
    scanf("%s",name);
    printf("%s",name);
    printf("%s",name);
    char name1[30];
    printf("\nEnter name1: ");
    gets(name1);
    printf("%s",name1);
    */

   /*
    char r[]={'H','a','r','m','a','n'};
    printf("%s \n",r);
    char s[]={'H','a','r','m','a','n','\0'};
    printf("%s",s);
    char name1[30];
    printf("\nEnter name1: ");
    gets(name1);
    printf("%s",name1);
    */


   char greetings[] = "Hello World!";
    printf("%c", greetings[0]);

    char ch[5];
    printf("Enter string: ");
    scanf("%4s",ch);
    printf("%s",ch);
    return 0;
}