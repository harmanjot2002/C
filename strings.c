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
    //Concatenation of 2 Strings
    char str1[30]="Harmanjot ";
    char str2[5]="Kaur";
    int len1=strlen(str1);
    int len2=strlen(str2);
    printf("%s\n",strcat(str1,str2));

    for(int i=0;i<=len2;i++){
      str1[len1+i]=str2[i];
    }
    printf("%s",str1);
  */

 /*
  //Compare 2 strings
  char s1[]="Hello";
  char s2[]="Welcome";
  int value=strcmp(s1,s2);
  if (value==0)
    printf("Same");
  else
    printf("Not same");
  printf("%d",value);
  */

 /*
  //Reverse a string
  char s1[30]="Harmanjot Kaur";
  strrev(s1);
  printf("%s",s1);

  int l,i;
  char ch;
  l=strlen(s1);
  for(i=0;i<l/2;i++){
    ch=s1[i];
    s1[i]=s1[l-i-1];
    s1[l-i-1]=ch;
  }
  printf("\n%s",s1);
  */

  //Convert string from upper to lower case
  /*
  char s1[30]="$%^890Jayanti2@#";
  strlwr(s1);
  printf("%s\n",s1);

  for(int i=0;s1[i]!='\0';i++){
    if(s1[i]>='A' && s1[i]<='Z')
      s1[i]=s1[i]+32;
  }
  printf("%s",s1);
  */

  /*
  char s1[30]="$%^890KhatriJayanti2@#";
  strupr(s1);
  printf("%s\n",s1);
  */

  //Pattern Searching
  /*
    Pattern found at index 0 
    Pattern found at index 4  
  */
  char s[]="ABCCABC";
  char p[]="ABC";
  int m=strlen(p);
  int n=strlen(s);
  for(int i=0;i<=n-m;i++){
    int j;
    for(j=0;j<m;j++){
      if(s[i+j]!=p[j])
        break;
    }
    if(j==m)
      printf("Pattern found at index %d \n ",i);
  }

  //Check if s2 is prefix of s1 or not
  /*
    Enter 2 strings:
    abcdef
    abc
    Yes
  */
  char s1[50];
  char s2[50];
  printf("Enter 2 strings:\n");
  scanf("%s",s1);
  scanf("%s",s2);
  if(strncmp(s1,s2,strlen(s2))==0)
    printf("Yes");
  else
    printf("No");
  return 0;
}