#include <stdio.h>
#include<stdlib.h>
 
void main(){
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("src.txt","r");
    if(fp1==NULL){
        printf("ERROR");
        exit(1);
    }
    fp2=fopen("dst.txt","w");
    while((c=fgetc(fp1))!=EOF){
        fputc(c,fp2);
    }
    printf("Successfully copied");
    fclose(fp1);
    fclose(fp2);
}