#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE* fp;
    char ch;
    fp=fopen("fseek.txt","r");
    if(fp==NULL){
        printf("ERROR");
        exit(1);
    }
    fseek(fp,6,SEEK_SET);
    ch=fgetc(fp);
    printf("%c",ch);
    fseek(fp,-3,SEEK_CUR);
    ch=fgetc(fp);
    printf("\n%c",ch);
    fseek(fp,-3,SEEK_END);
    ch=fgetc(fp);
    printf("\n%c",ch);
    /*
    Initially:
        Jenny Khatri is awesome
    On console:
        K
        y
        o
    */
}