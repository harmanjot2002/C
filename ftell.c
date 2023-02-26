#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE* fp;
    char ch;
    int pos;
    char str[50];
    fp=fopen("ftell.txt","r");
    if(fp==NULL){
        printf("ERROR");
        exit(1);
    }
    pos=ftell(fp);
    printf("%d\n",pos);
    fseek(fp,5,SEEK_SET);
    printf("%d\n",ftell(fp));
    ch=fgetc(fp);
    printf("%c\n",ch);
    printf("%d\n",ftell(fp));
    fscanf(fp,"%s\n",str);
    printf("%s\n",str);
    printf("%d\n",ftell(fp));
    fclose(fp);

    /*
    Initially:
    Jenny Khatri is awesome
    Output:
    0
    5

    6
    Khatri
    13
    */
}