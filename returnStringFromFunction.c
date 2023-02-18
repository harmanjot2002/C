#include <stdio.h>

char *display();

int main(){
    char * str;
    str=display();
    printf("String is %s",str);
    return 0;
}

char *display(){
    //return "Jenny";
    static char *str="Jenny";
    return str;
}