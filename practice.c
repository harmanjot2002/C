#include <stdio.h>
#include <string.h>


int isNextPrime(int n){
    int flag=0;
    if(n==0 || n==2)
        flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else    
        return 0;
}

int main(){
    //Check leap year
    /*
    int year;
    scanf("%d",&year);
    if(year%4==0 && year%100!=0)
        printf("Leap year");
    else if(year%400==0)
        printf("Leap year");
    else
        printf("Not leap year");
    */

   //Transpose of array
   /*
   int a[2][3];
   printf("Enter elements of array: ");
   for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
   }
   printf("Transpose of given array is:\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d ",a[j][i]);
    }
    printf("\n");
   }
   */

    //GCD of 2 numbers
    /*
    int n,m;
    int min=0;
    int ans;
    printf("Enter 2 numbers:");
    scanf("%d %d",&n,&m);
    if(n>m){
        min=m;
    }
    else{
        min=n;
    }
    for(int i=1;i<=min;i++){
        if(n%i==0 && m%i==0)
            ans=i;
    }
    printf("HCF of %d and %d is %d",n,m,ans);
    */

   //LCM of 2 numbers
   /*
    int n,m;
    int mx=0;
    int ans;
    printf("Enter 2 numbers:");
    scanf("%d %d",&n,&m);
    if(n>m){
        mx=n;
    }
    else{
        mx=m;
    }
    for(int i=mx;i<=m*n;i++){
        if(i%m==0 && i%n==0){
            ans=i;
            break;
        }
    }
    printf("LCM of %d and %d is %d",n,m,ans);
    */

   //Check prime no. or not
   /*
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   if(n==0 || n==2)
    printf("Not prime");
   int flag=0;
   for(int i=2;i<n;i++){
    if(n%i==0){
        flag=1;
        break;
    }
   }
    if(flag==0)
        printf("Prime");
    else    
        printf("Not Prime");
    */

   //Find next prime
   /*
    int n;
    scanf("%d",&n);
    if(isNextPrime(n)){
        printf("%d is prime no.",n);
    }
    else{
        for(int i=n+1;i<=n+10;i++){
            if(isNextPrime(i)==1){
                printf("Next prime is %d",i);
                break;
            }
        }
    }
    */

   //Swapping 2 strings
   /*
    char str1[50];
    char str2[50];
    char temp[50];
    printf("Enter 2 strings:\n");
    gets(str1);
    gets(str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("str1=%s and str2=%s",str1,str2);
    */

    //Check Palindrome
    /*
    char s[100];
    char temp[100];
    printf("Enter string ");
    gets(s);
    strcpy(temp,s);
    printf("Original string is %s \n",temp);
    strrev(s);
    printf("Reversed string is %s \n",s);
    if(strcmp(s,temp)==0)
        printf("Palindrome");
    else
        printf("Not palindrome");
    */

    //Pattern Searching
    /*
   char s[100];
   char p[100];
   gets(s);
   gets(p);
   int m=strlen(p);
   int n=strlen(s);
   for(int i=0;i<=n-m;i++){
    int j;
    for(j=0;j<m;j++){
        if(s[i+j]!=p[j])
            break;
    }
    if(j==m)
        printf("Pattern found at index %d \n",i);
   }
    */


    //Check if s2 is prefix of s1
    /*
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    if(strncmp(s1,s2,strlen(s2))==0){
        printf("Yes");
    } 
    else
        printf("No");
    */

    //String Tokenization
    /*
        har-man,jot kaur-is-good,girl thanks
        -,
        har        
        man        
        jot kaur   
        is
        good       
        girl thanks
    */
   /*
    char str[100];
    char sep[10];
    gets(str);
    gets(sep);
    char *token=strtok(str,sep);
    while(token!=NULL){
        printf("%s\n",token);
        token=strtok(NULL,sep);
    }
    */

    //Maximum and Second maximum element in array
    /*
    int arr[100];
    int n;
    int mx=0;
    int sm=0;
    printf("Enter no. of elements to be inserted: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            sm=mx;
            mx=arr[i];
        }
        else if(arr[i]<mx && arr[i]>sm){
            sm=arr[i];
        }
    }
    printf("%d %d",sm,mx);
    */


    //Check sorted array or not
    /*
    int n;
    int flag=1;
    printf("Enter no. of elements to be inserted: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            flag=0;
            break;
        }
    }
    if(flag==0)
        printf("Not sorted");
    else    
        printf("Sorted");
    */


   //Find frequency of a character
   /*
    char str[1000], ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find it's frequency: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (ch == str[i])
            count++;
    }
    printf("Frequency of %c = %d", ch, count);
    */

   //Sort an array
   /*
    int n;
    printf("Enter no. of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array is ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    */

   //Fibonacci Series
    int n;
    printf("Enter vaue of n: ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    printf("%d %d",a,b);
    for(int i=2;i<n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }


   //Armstrong Number

   
   //Bitwise Operators


   //Count distinct elements


   //Print Cross-Diagnol elements in matrix

   
   //Prime Factorization


   //Decimal to Binary Conversion


   //Binary to Decimal Conversion


   //GFG Pattern
    return 0;
}