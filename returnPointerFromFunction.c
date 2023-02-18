#include <stdio.h>

int *returnPointer(int []);

int main(){
    int *p;
    int a[]={1,2,3,4,5};
    p=returnPointer(a);
    /*
        a=a+2;
        pintf("%d",a);
    */
    printf("%d",*p);
}

int *returnPointer(int a[]){
    a=a+2;
    return a;
}