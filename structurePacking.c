#include<stdio.h>

struct abc{
    char a;
    char b;
    int c;
};
struct acb{
    char a;
    int c;
    char b;
};

void main(){
    struct abc ab;
    struct acb ac;
    
    printf("%d\n",sizeof(ab));
    printf("%d\n",sizeof(ac));

}