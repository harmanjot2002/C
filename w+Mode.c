#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fp=NULL;
    char ch;
    char str[50];
    fp=fopen("w+Mode.txt","w+");
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    fputs("Khatri",fp);
    rewind(fp);
    while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);

    /*
    Initially:
        In file:Jenny
    After execution:
        On console:Khatri
        In file:Khatri
    */
    return 0;
}