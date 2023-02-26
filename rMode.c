#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* fp=NULL;
    char ch,c;
    char str1[50];
    fp=fopen("rMode.txt","r");
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    ch=fgetc(fp);
    printf("%c\n",ch);
    /*
    Output:
    T
    */


    while(!feof(fp)){
        c=fgetc(fp);
        printf("%c",c);
    }
    /*
    Output:
    This is a readable file
    This is created in C 
    */


    // while(!feof(fp)){
    //     fgets(str1,19,fp);
    //     printf("%s",str1);
    // }
    /*
    Output:
    This is a readable file
    This is created in C 
    */
    fclose(fp);
    return 0;
}