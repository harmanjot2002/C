#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int isPrime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}

int count(int n){
    int count=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        count++;
    }
    return count;
}

int max(int a,int b){
    if(a>b)
        return a;
    else    
        return b;
}

int min(int a,int b){
    if(a>b)
        return b;
    else
        return a;
}

int getWater(int arr[],int n){
    int res=0,i;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],arr[i]);
    }
    rmax[n-1]=arr[n-1];
    for(i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],arr[i]);
    }
    for(i=1;i<n-1;i++){
        res+=(min(rmax[i],lmax[i])-arr[i]);
    }
    return res;
}

bool isTeoplitz(int n,int m,int arr[n][m]){
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i][j]!=arr[i-1][j-1]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    //1.Count number of words in a string
    /*
    char str[100];
    gets(str);
    int i;
    int count=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("%d",count+1);
    */

    
    //2.Maximum of array
    /*
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mx=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    printf("%d",mx);
    */


    // 3.Count no. of vowels,digits,consonents and spaces.
    /*
    int cv=0,cd=0,cc=0,cs=0;
    char str[100];
    gets(str);
    int i;
    for(i=0;i<strlen(str);i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            cv++;
        }
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            cc++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            cd++;
        }
        else if(str[i]==' '){
            cs++;
        }
    }
    printf("%d %d %d %d",cv,cc,cd,cs);
    */

   //4.Write a recursive function which can find Nth Fibonacci number
   /*
   int n;
   scanf("%d",&n);
    printf("%d",fib(n));
    */


    //5.You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string. 
    /*
    char word1[100];
    char word2[100];
    gets(word1);
    gets(word2);
    char word3[100];
    int i=0,j=0,k=0;
    int x=strlen(word1);
    int y=strlen(word2);
    while(i<x || j<y){
        if(i<x){
            word3[k]=word1[i];
            k++;
            i++;
        }
        if(j<y){
            word3[k]=word2[j];
            k++;
            j++;
        }
    }
    while(i<x){
            word3[k]=word1[i];
            k++;
            i++;
    }
    while(j<y){
            word3[k]=word2[j];
            k++;
            j++;
    }
    for(int l=0;l<strlen(word3);l++){
        printf("%c",word3[l]);
    }
    */

   //6.You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.
   /*
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited=-1;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=visited;
            }
        }
        if(freq[i]!=visited){
            freq[i]=count;
        }
    }
    int sum=0; 
    for(int i=0;i<n;i++){
        if(freq[i]==1){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    */

   //Q7 Write a program in C to calculate sum of every row and column in a 2D matrix.
    /*
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        int sr=0;
        for(j=0;j<m;j++){
            sr+=arr[i][j];
        }
        printf("Sum of %dth row is: %d\n",i,sr);
    }
    for(i=0;i<m;i++){
        int sc=0;
        for(j=0;j<n;j++){
            sc+=arr[j][i];
        }
        printf("Sum of %dth column is: %d\n",i,sc);
    }
    */

   //Q.8 Given an circular array which represent a id of your company’s customers you need to decrypt that data by replacing the number with sum of next 3 numbers 
   /*
    int n,i,j;
    scanf("%d",&n);
    int arr[n],ans[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        ans[i]=0;
    }
    for(i=0;i<n;i++){
        int sum=0;
        for(j=1;j<=3;j++){
            sum+=arr[(i+j)%n];
            ans[i]=sum;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    */

   //9.Write a function which can find Nth Fibonacci number
   /*
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=1;
    if(n==0 || n==1){
        printf("%d",n);
    }
    else{
        while(c<n){
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }
    */

   //10.Write	a	function	named	countsetbits	that	can	take	an	integer	value	as	an	argument		 and	return	a	number	of	1s(set	bits)	in	the	binary	representation	of	a	given	integer	value.
   /*
    int t;
    scanf("%d",&t);
    while(t--){
        int arr[100];
        int n,i=0,k=0;
        scanf("%d",&n);
        while(n>0){
            arr[i]=n%2;
            n=n/2;
            i++;
            k++;
        }
        int cnt=0;
        for(int j=k-1;j>=0;j--){
            printf("%d",arr[j]);
            if(arr[j]==1){
                cnt++;
            }
        }
        printf("\n%d",cnt);
        printf("\n");
    }
    */


    //11.Write a C program which can convert Lowercase to Uppercase of given string.
    /*
    char str[100];
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    for(int i=0;i<strlen(str);i++){
        printf("%c",str[i]);
    }
    */


   //12. Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.
   /*
    int n;
    scanf("%d",&n);
    int x=n;
    int se=0,so=0;
    int cnt=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        cnt++;
    }
    if(cnt%2==0){
        while(x>0){
            int rem=x%10;
            x=x/10;
            so+=rem;
            int rem2=x%10;
            x=x/10;
            se+=rem2;
        }
    }
    else{
        while(x>0){
            int rem=x%10;
            x=x/10;
            se+=rem;
            int rem2=x%10;
            x=x/10;
            so+=rem2;
        }
    }
    printf("%d %d",so,se);
    */


   //13.


   //14.Check a string if it is a palindrome
   /*
   char str[100];
   gets(str);
   char cpy[100];
   strcpy(cpy,str);
   strrev(cpy);
   if(strcmp(cpy,str)==0){
    printf("Palindrome");
   }
   else{
    printf("Not");
   }
   */

/*
  char str[100];
  gets(str);
  int len=strlen(str);
  char str2[100];
  //Copying
  for(int i=0;i<len;i++){
    str2[i]=str[i];
  }
  //Reverse
  for(int i=0;i<len/2;i++){
    char temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;
  }
  for(int i=0;i<len;i++){
    printf("%c",str[i]);
  }
  //Comparing
  int flag=0;
  for(int i=0;i<len;i++){
    if(str[i]!=str2[i]){
        flag=1;
        break;
    }
  }
  if(flag==1){
    printf("\nNot palindrome");
  }
  else{
    printf("\nPalindrome");
  }
*/


    //Check Anagram
    /*
    char str[100];
    char str2[100];
    int freq[26]={0};
    gets(str);
    gets(str2);
    int len1=strlen(str);
    int len2=strlen(str2);
    if(len1!=len2){
        printf("Not anagram");
    }
    else{
       for(int i=0;i<len1;i++){
        char temp=str[i];
        int pos=temp-'a';
        freq[pos]++;
       }
       for(int i=0;i<len2;i++){
        char temp=str2[i];
        int pos=temp-'a';
        freq[pos]--;
       }
       int flag=0;
       for(int i=0;i<26;i++){
            if(freq[i]!=0){
                flag=1;
                break;
            }
       }
       if(flag==0){
        printf("Anagram");
       }
       else{
        printf("Not anagram");
       }
    }
    */


    //LCM
    /*
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=0;
    int max;
    if(a>b)
        max=a;
    else
        max=b;
    for(int i=max;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            ans=i;
            break;
        }
    }
    printf("%d",ans);
    */


   //HCF
   /*
    int a,b;
    int min,ans=0;
    scanf("%d %d",&a,&b);
    if(a<b)
        min=a;
    else    
        min=b;
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    printf("%d",ans);
    */


   //Prime factorization
   /*
    int n;
    scanf("%d",&n);
    int c=2;
    while(n>1){
        if(n%c==0){
            printf("%d ",c);
            n=n/c;
        }
        else{
            c++;
        }
    }
    */

   //Leap year
   /*
   int y;
   scanf("%d",&y);
   if(y%4==0 && y%100!=0){
    printf("Leap year");
   }
   else if(y%400==0){
    printf("Leap year");
   }
   else{
    printf("Not leap year");
   }
    */


   //Next prime
   /*
    int n;
    scanf("%d",&n);
    if(isPrime(n))
        printf("%d is already prime no.",n);
    else{
        for(int i=n+1;i<n+10;i++){
            if(isPrime(i)){
                printf("%d is next prime no.",i);
                break;
            }
        }
    }
    */


   //Binary to decimal(tring given)
   /*
   char str[100];
   gets(str);
   int base=1,ans=0;
    for(int i=strlen(str)-1;i>=0;i--){
        int digit=str[i]-48;
        ans+=(digit*base);
        base*=2;
    }
    printf("%d",ans);
    */

   //Binary to decimal(int. given)
   /*
    int n;
    scanf("%d",&n);
    int base=1,ans=0;
    while(n>0){
        int digit=n%10;
        n=n/10;
        ans+=(digit*base);
        base*=2;
    }
    printf("%d",ans);
    */


   //Decimal to binary(int given)
   /*
    int n;
    scanf("%d",&n);
    int ans[100],i=0,k=0;
    while(n>0){
        ans[i]=n%2;
        n=n/2;
        i++;
        k++;
    }
    for(int i=k-1;i>=0;i--){
        printf("%d",ans[i]);
    }
    */


   //Check array rotation
   /*
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int min_index=0;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            min_index=i;
        }
    }
    printf("%d",min_index);
    */

   //1-1/2+1/3-1/4
   /*
    int n;
    scanf("%d",&n);
    float sum=0.0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=(float)1/(float)i;
        }
        else{
            sum-=(float)1/(float)i;
        }
    }
    printf("%.4f",sum);
    */

   //Alphabet Pattern
   /*
    char ch;
    scanf("%c",&ch);
    for(int i='A';i<=ch;i++){
        for(int j='A';j<i;j++){
            printf("%c ",i);
        }
        printf("%c\n",i);
    }
    */


   //Alternate digit sum
   /*
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int rem=n%10;
        int cnt=count(n);
        if(cnt%2==0){
            sum-=rem;
        }
        else{
            sum+=rem;
        }
        n=n/10;
    }
    printf("%d",sum);
    */


   //Merge 2 sorted arrays
   //5:1 3 5 7 9,7:2 4 6 8 9 10 12
    /*
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int t=0;t<n;t++){
        scanf("%d",&arr[t]);
    }
    int m;
    scanf("%d",&m);
    int arr2[m];
    for(int y=0;y<m;y++){
        scanf("%d",&arr2[y]);
    }
    int i=0,j=0,k,s=m+n,arr3[s];
    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            arr3[k]=arr[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    for(int o=0;o<s;o++){
        printf("%d ",arr3[o]);
    }
    */


   //Checl Fibonacci
   //0 1 1 2 3 5 8 13 21
   /*
    int n;
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("True");
    }
    else{
        int a=0;
        int b=1;
        int c;
        while(c<n){
            c=a+b;
            a=b;
            b=c;
        }
        if(c==n){
            printf("True");
        }
        else{
            printf("False");
        }
   }
   */

    //Break the number
    /*
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int rev=0;
        while(n>0){
            int rem=n%10;
            n=n/10;
            rev=(rev*10)+rem;
        } 
        while(rev>0){
            int rem=rev%10;
            rev/=10;
            printf("%d ",rem);
        }
    }
    */

   //Total volume of water
   /*
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",getWater(arr,n));
    */


   //Medals Calculation
   /*
    int c,n,m;
    scanf("%d %d %d",&c,&n,&m);
    int arr[c][3],i,j,k;
    for(i=0;i<c;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<3;j++){
            scanf("%d",&k);
            arr[i][j]+=k;
        }
    }
    printf("%d",arr[n-1][m-1]);
    */

    //Profit in Confectionary
    /*
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        if(isTeoplitz(n,m,arr))
            printf("Is Teoplitz");
        else
            printf("Not Teoplitz");
    }
    */


   //Sort an array
   /*
    int n,i,j;
    scanf("%d",&n);
    char str[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                char temp[100];
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s ",str[i]);
    }
    */


   //Duplicate number
   /*
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d %d",arr[i]);
            }
        }
    }
    */

   //Armstrong No.
   /*
    int n,cnt=0,rem;
    float ans=0,po;
    scanf("%d",&n);
    int x=n;
    int y=n;
    while(n>0){
        n=n/10;
        cnt++;
    }
    while(x>0){
        rem=x%10;
        x=x/10;
        po=(pow(rem,cnt));
        ans+=po;
    }
    if(y==ans){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }
    */


   //Binary to Decimal(1010->10,101->5)
   /*
    int n;
    scanf("%d",&n);
    int base=1;
    int ans=0;
    while(n>0){
        int digit=n%10;
        n=n/10;
        ans+=(digit*base);
        base*=2;
    }
    printf("%d",ans);
    */


   //Binary to decimal(string)
   /*
   char p[100];
   gets(p);
   int base=1;
   int ans=0;
   for(int i=strlen(p)-1;i>=0;i--){
    int digit=p[i]-48;
    ans+=(digit*base);
    base*=2;
   }
   printf("%d",ans);
   */

  //Decimal to binary(5->101,10->1010)
    int n;
    scanf("%d",&n);
    int arr[100],i=0,k=0;
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
        k++;
    }
    for(int i=k-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}