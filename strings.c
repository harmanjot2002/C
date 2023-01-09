#include<stdio.h>
#include<string.h>
int main(){
    /*
    char name[30];
    printf("Enter name: ");
    scanf("%s",name);
    printf("%s",name);
    printf("%s",name);
    char name1[30];
    printf("\nEnter name1: ");
    gets(name1);
    printf("%s",name1);
    */

   /*
    char r[]={'H','a','r','m','a','n'};
    printf("%s \n",r);
    char s[]={'H','a','r','m','a','n','\0'};
    printf("%s",s);
    char name1[30];
    printf("\nEnter name1: ");
    gets(name1);
    printf("%s",name1);
    */

   /*
   char greetings[] = "Hello World!";
    printf("%c", greetings[0]);
    */

   /*
    char ch[5];
    printf("Enter string: ");
    scanf("%4s",ch);
    printf("%s",ch);
    */

   /*
    char carName[] = "Volvo";
    int i;
    for (i = 0; i < 5; ++i) {
    printf("%c\n", carName[i]);
    }
   */

  /*
    char name[30];
    printf("Enter name: ");
    scanf("%s",name); 
    printf("%.5s",name); 
    printf("%10.5s\n",name); 
    puts(name);
    puts(name);
    printf("%s\n",&name);
    printf("%s",&name[2]);
  */
    
    /*
    //Length of string
    char str[30];
    int count;
    printf("Enter string: ");
    gets(str);
    count=strlen(str);
    printf("The length of string is %d \n",count);

    int cnt=0;
    int i=0;
    while(str[i]!='\0'){
        cnt++;
        i++;
    }
    printf("%d",cnt);
    */
   
   /*
    Concatenation of 2 Strings
   */
    char str1[30]="Harmanjot ";
    char str2[5]="Kaur";
    int len1=strlen(str1);
    int len2=strlen(str2);
    printf("%s\n",strcat(str1,str2));

    for(int i=0;i<=len2;i++){
      str1[len1+i]=str2[i];
    }
    printf("%s",str1);
    return 0;
}