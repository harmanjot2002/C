#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE* fp=NULL;
    char str[30];
    fp=fopen("fileHandlingQues.txt","r+");
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    while(!feof(fp)){
        fgets(str,5,fp);
        printf("%s",str);
    }
    fputs("jenny",fp);
    fclose(fp);

    /*
    Initially:
        Jenny Khatri is awesome faculty
    On console:
        Jenny Khatri is awesome faculty 
    In file:
        Jenny Khatri is awesome facultyjenny
    
    */
}