#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fp=NULL;
    char str[50];
    fp=fopen("aMode.txt","a");
    if(fp==NULL){
        printf("Error");
        exit(1);
    }
    printf("Enter content you want to append:");
    gets(str);
    fprintf(fp,"\n %s",str);
    fclose(fp);

    /*
    Enter content you want to append:Saravdeep Singh
    Output:
    Harmanjot Kaur
    Navreet Kaur
    Gurvansh Singh
    Jasleen Kaur
    Saravdeep Singh
    */
    return 0;
}