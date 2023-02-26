#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fp=NULL;
    fp=fopen("r+Mode.txt","r+");
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    fputc('z',fp);
    fputs("Jenny",fp);
    /*
    Initially:
        Hi,Harman!!
    After fputc():
        zi,Harman!!
    Finally:
        zJennyman!!
    */
    
    fclose(fp);
    return 0;
}