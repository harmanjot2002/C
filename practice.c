#include <stdio.h>
#include <string.h>
#include <math.h>

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

void rev(char str[]){
    int l=strlen(str);
    for(int i=0;i<l/2;i++){
        char temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    printf("%s",str);
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


  //Maximum in each row
  /*
    int arr[2][3]={1,3,2,6,4,5};
    for(int i=0;i<2;i++){
        int maxi=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]>maxi)
                maxi=arr[i][j];
        }
        printf("Maximum in row %d is %d\n",i,maxi);
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
   /*
    int n;
    printf("Enter vaue of n: ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    */


   //Armstrong Number
   /*
    int n;
    scanf("%d",&n);
    int x=n;
    int y=n;
    int rem;
    float sum=0.0;
    int cnt=0;
    while(y>0){
        y=y/10;
        cnt++;
    }
    while(x>0){
        rem=x%10;
        x=x/10;
        sum+=pow(rem,cnt);
    }
    // printf("%.0f",sum);
    if(sum==n){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }
    */


    //Frequency of each element in array
    /*
        Enter value of n: 9
        Enter elements of array: 1 2 8 3 2 2 2 5 1
        1 2
        2 4
        8 1
        3 1
        5 1
    */
   /*
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    int visited=-1;
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=visited;
            }
        }
        if(freq[i]!=visited)
            freq[i]=count;
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=visited){
            printf("%d %d\n",arr[i],freq[i]);
        }
    }
    */


   //Print unique elements in array(ocurrence=1)
   /*
    Enter value of n: 9
    Enter elements of array: 1 2 8 3 2 2 2 5 1
    8
    3
    5
   */
  /*
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    int visited=-1;
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=visited;
            }
        }
        if(freq[i]!=visited)
            freq[i]=count;
    }
    for(int i=0;i<n;i++){
        if(freq[i]==1){
            printf("%d\n",arr[i]);
        }
    }
    */


   //Print distinct elements in array
   /*
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    int visited=-1;
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=visited;
            }
        }
        if(freq[i]!=visited)
            freq[i]=count;
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=visited){
            printf("%d\n",arr[i]);
        }
    }
    */


   //Count distinct elements
   /*
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    int visited=-1;
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=visited;
            }
        }
        if(freq[i]!=visited)
            freq[i]=count;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(freq[i]!=visited){
            cnt++;
        }
    }
    printf("%d",cnt);
    */

   //Print Cross-Diagnol elements in matrix
   /*
    int a[3][3];
    int n=3;
    printf("Enter elements of 2-D matrix: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            if(i==j){
                printf("Diagnol element is %d \n",a[i][j]);
            }
            else if(i+j==n-1){
                printf("Cross-Diagnol element is %d \n",a[i][j]);
            }
        }
    }
    */

   
   //Prime Factorization
   /*
    Enter value of n:99
    3 3 11
   */
   /*
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int c=2;
    while(n>1){
        if(n%c==0){
            printf("%d ",c);
            n=n/c;
        }
        else
            c++;
    }
    */


   //Plus Pattern
   /*
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==n/2+1){
            for(int j=1;j<=n;j++){
                printf("+");
            }
        }
        else{
            for(int k=1;k<=n/2;k++){
                printf(" ");
            }
            printf("+");
        }
        printf("\n");
    }
    */

   //Cross Pattern
   /*
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if((i==j) || (i+j==2*n)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    */

   //Pascal's  Triangle
   /*
    6
      1 
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5 1
   */
    /*
    int n,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            if(i==0 || j==0)
                c=1;
            else
                c=(c*(i-j+1))/j;
            printf("%d ",c);
        }
        printf("\n");
    }
    */


   //Decimal to Binary Conversion
   /*
    int n;
    scanf("%d",&n);
    char str[100];
    int i=0;
    while(n>0){
        int rem=n%2;
        n=n/2;
        char num=rem+48;
        str[i]=num;
        i++;
    }
    rev(str);
    */

   //Binary to Decimal Conversion
   /*
    char str[100];
    gets(str);
    int ans=0;
    int base=1;
    for(int i=strlen(str)-1;i>=0;i--){
        int digit=str[i]-48;
        ans+=(digit*base);
        base*=2;
    }
    printf("%d",ans);
    */


   //HackerRank Pattern
   /*
    Enter value of n: 4
    4444444
    4333334
    4322234
    4321234
    4322234
    4333334
    4444444
   */
    /*
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int size=2*n-1;
    int arr[size][size];
    int start=0;
    int end=size-1;
    while(n>0){
        for(int i=start;i<=end;i++){
            for(int j=start;j<=end;j++){
                if(i==start || i==end || j==start || j==end)
                    arr[i][j]=n;
            }
        }
        start++;
        end--;
        n--;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    */

   //Bitwise Operators
   /*
    5 4
    2 3 3
   */
  /*
    int n,k;
    scanf("%d %d",&n,&k);
    int maxAnd = 0,maxOr = 0,maxXor = 0;
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (((i&j) > maxAnd) && ((i&j) < k)) {
                maxAnd = i&j;
            }
            if (((i|j) > maxOr) && ((i|j) < k)) {
                maxOr = i|j;
            }
            if (((i^j) > maxXor) && ((i^j) < k)) {
                maxXor = i^j;
            }
        }
    }
    printf("%d %d %d", maxAnd, maxOr, maxXor);
    */

   
   //Reverse a string
   /*
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len=strlen(str);
    for(int i=len-1;i>=0;i--){
        if(str[i]==' '){
            str[i]='\0';
            printf("%s ",&(str[i])+1);
        }
    printf("%s ",str);
    */

   /*
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("%d", **arr + 2);
    */

   /*
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*p)[3] = arr;
    printf("%d", **p);
    */

   
    return 0;
}