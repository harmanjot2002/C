#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE* fp=NULL;
    char ch;
    fp=fopen("a+Mode.txt","a+");
    if(fp==NULL){
        printf("File doesn't exist");
        exit(1);
    }
    fputs("Khatri",fp);
    rewind(fp);
    while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    /*
    Initially:
        Jenny
    In file:
        JennyKhatri
    On console:
        JennyKhatri
    */
}