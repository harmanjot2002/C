#include <stdio.h>
int main(){
    int a[]={3,2,67,0,56};
    int *p;
    /*
    p=a;
    printf("%d %d",*p++,*p++);
    */
   p=&a[2];
   printf("%d %d %d",--(*p),--(*p),--(*p));
}