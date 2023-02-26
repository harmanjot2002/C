#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE* fp=NULL;
    int cnt=1;
    char ch;
    fp=fopen("countNoOfLinesInFile.txt","r");
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch=='\n')
            cnt++;
    }
    fclose(fp);
    printf("%d",cnt);
}