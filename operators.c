#include <stdio.h>
#include <conio.h>
void main(){
    int a=10,b=7;
    printf("%d",a+b);
    printf(" \n %d",a-b);
    printf("\n %d",a/b);
    printf("\n %d",a*b);
    printf("\n %d",a%b);
    printf("\n %d",-10%7);
    printf("\n %d",10%-7);

    int x=4,y=6,result1,result2,result3;
    result1=x>y && printf("Jenny");
    printf("\n %d",result1); //0
    printf("\n");
    result2=x<y && printf("Jenny");
    printf(" %d",result2); //Jenny 1
    printf("\n");
    result3=x>y && printf("Jenny") || printf(" lectures");
    printf(" %d",result3); //lectures 1

    int p=1,q=6,res1,res2;
    res1=p-- && ++q;
    res2=--p && ++q;
    printf("\n");
    printf("%d",res1);
    printf("\n");
    printf("%d",res2);

    int e=5,f;
    f=~e;
    printf("\n %i",f);

    int h;
    h=5,4;
    printf("\n %d",h);
    // int g=5,4;
    // printf("\n %d",g); //error
    int g;
    g=(5,4);
    printf("\n %d",g);
}