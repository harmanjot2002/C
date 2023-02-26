#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fp=NULL;
    char ch='a';
    int a=10;
    char str[50]="Harmanjot Kaur";
    fp=fopen("wMode.txt","w");
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    fputc(ch,fp);
    fputs(str,fp);
    fprintf(fp,"\n%d %s",a,str);
    fclose(fp);

    /*
        Output:
        aHarmanjot Kaur
        10 Harmanjot Kaur
    */
    return 0;
}