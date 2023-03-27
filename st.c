//Binary to Decimal
/*
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int ans=0;
    int base=1;
    int i;
    for(i=strlen(str)-1;i>=0;i--){
        int digit=str[i]-48;
        ans+=(digit*base);
        base*=2;
    }
    printf("%d",ans);
}
*/

//Check Array Rotation
/*
#include<stdio.h>
int arrRot(int n,int arr[n]){
    int min=arr[0];
    int min_index=0;
    int i;
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            min_index=i;
        }
    }
    return min_index;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans=arrRot(n,arr);
    printf("%d",ans);
    return 0;
}
*/

//Summation
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        sum+=rem;
    }
    printf("%d",sum);
}
*/

//Matrix Operation
/*
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int i,j,arr[n][m];
    int iThRow;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]==0)
                iThRow=i;
        }
    }
    int k=iThRow;
    int l;
    for(l=0;l<m;l++){
        arr[k][l]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

//Pattern Printing
/*
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
                printf(" ");
            }
            for(j=i;j<=2*i-1;j++){
                printf("%d",j);
            }
            for(j=2*i-2;j>=i;j--){
                printf("%d",j);
            }
            printf("\n");
        }
    }
    return 0;
}
*/

//Print Anti-Diagnol
/*
#include<stdio.h>
int main(){
    int n,j,k,l;
    scanf("%d %d",&n,&j);
    int arr[n][n];
    for(k=0;k<n;k++){
        for(l=0;l<n;l++){
            scanf("%d",&arr[k][l]);
        }
    }
    for(k=0;k<=j;k++){
        for(l=0;l<=j;l++){
            if(k+l==j){
                printf("%d ",arr[k][l]);
            }
        }
    }
    return 0;
}
*/

//Column Wise Sum
/*
#include<stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        int sum=0;
        for(j=0;j<m;j++){
            sum+=arr[j][i];
        }
        printf("%d ",sum);
    }
}
*/

//Sum of series
/*
#include<stdio.h>
int main(){
    int n;
    int i;
    float num;
    scanf("%d",&n);
    float sum=0.0;
    for(i=1;i<=n;i++){
        if(i%2==0){
            num=(float)1/(float)i;
            sum-=num;
        }
        else{
            num=(float)1/(float)i;
            sum+=num;
        }
    }
    printf("%.4f",sum);
    return 0;
}
*/

//Half Pyramid of Alphabets
/*
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    int i,j;
    for(i='A';i<=c;i++){
        for(j='A';j<i;j++){
            printf("%c ",i);
        }
        printf("%c\n",i);
    }
    return 0;
}
*/

//Alternate Digit Sum
/*
#include<stdio.h>
int cnt(int n){
    int cou=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        cou++;
    }
    return cou;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int rem=n%10;
        int cont=cnt(n);
        if(cont%2==0){
            sum-=rem;
        }
        else{
            sum+=rem;
        }
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
*/

//Pattern Printing 2
/*
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//Class Topper and Looser
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],smax=arr[1],min=arr[0],smin=arr[1];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>smax){
            smax=arr[i];
        }
    }
    for(i=1;i<n;i++){
        if(arr[i]<min){
            smin=min;
            min=arr[i];
        }
        else if(arr[i]>min && arr[i]<smin){
            smin=arr[i];
        }
    }
    int diff=smax-smin;
    printf("%d",diff);
    return 0;
}
*/


//Merge two arrays
/*
#include<stdio.h>
int main(){
    int n,m,s,o,i=0,j=0;
    scanf("%d",&n);
    int a[n];
    for(s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    scanf("%d",&m);
    int b[m];
    for(o=0;o<m;o++){
        scanf("%d",&b[o]);
    }
    int l=m+n;
    int res[l];
    int k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            res[k]=a[i];
            i++;
            k++;
        }
        else{
            res[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n){
        res[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        res[k]=b[j];
        j++;
        k++;
    }
    for(i=0;i<l;i++){
        printf("%d ",res[i]);
    }
    return 0;
}
*/

//Fibonacci Series
/*
#include<stdio.h>
int fibb(int n){
    if(n==0){
        return 1;
    }
    int a=0,b=1,c=1;
    while(c<n){
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n){
        return 1;
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    scanf("%d",&n);
    int ans=fibb(n);
    if(ans==1)
        printf("true\n");
    else
        printf("false\n");
    }
}
*/

//Break the number
/*
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int num;
        scanf("%d",&num);
        int rem,val = 0;
        while(num > 0){
            rem = num % 10;
            val = (val * 10) + rem;
            num = num / 10;
        }
        while(val > 0){
            rem = val % 10;
            printf("%d ",rem);
            val = val / 10;
        }   
    }
    return 0;
}
*/

//Half pyramid of alphabets 2
/*
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    int i,j;
    for(i='A';i<=c;i++){
        for(j='A';j<i;j++){
            printf("%c ",j);
        }
        printf("%c\n",j);
    }
    return 0;
}
*/

//Conversion binary to decimal
/*
#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        int ans=0;
        int base=1;
        int i;
        for(i=strlen(str)-1;i>=0;i--){
            int digit=str[i]-48;
            ans+=(digit*base);
            base*=2;
        }
        printf("%d\n",ans);
    }
}
*/

//Moring Prayer Queue
/*
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=arr[1];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>smax){
            smax=arr[i];
        }
    }
    printf("Max = %d",max);
    printf("\nSecond Max = %d",smax);
    return 0;
}
*/

//An array for max and min
/*
# include <stdio.h>
int main(){
    int n,m,i;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(m==1){
        int min=arr[0];
        for(i=1;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        printf("%d",min);
    }
    if(m==2){
        int max=arr[0];
        for(i=1;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        printf("%d",max);
    }
}
*/

//Calculate the total volume of water
/*
#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if(a>b){
        return b;
    }
    else
        return a;
}
int getWater(int arr[],int n){
    int i;
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(i=1;i<n;i++){
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax[n-1]=arr[n-1];
    for(i=n-2;i>=0;i--){
        rmax[i]=max(arr[i],rmax[i+1]);
    }
    for(i=1;i<n-1;i++){
        res+=(min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
}
int main(){
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",getWater(arr,n));
}
*/


//Medals Calculation


//Profit in Confectionary
/*
#include<stdio.h>
#include<stdbool.h>
bool isToeplitz(int arr[5][5]){
    int d=arr[0][0];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
           if(i==j){
                if(arr[i][j]!=d){
                    return 0;
                }
            }
        }
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int arr[5][5];
        int i,j;
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        if(isToeplitz(arr)){
            printf("TRUE\n");
        } 
        else{
            printf("FALSE\n");
        }
    }
    return 0;
}
*/


//Sort an array
/*
#include <stdio.h>
#include <string.h>
#include<malloc.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[n][100];
    int i,j;
    for(i=0;i<n;i++)
        scanf("%s",&arr[i]);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(strcmp(arr[i],arr[j])>0){
                char t[100];
                strcpy(t,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],t);
            }
        }
    }
    printf("The sorted array of strings is: ");
    for(i=0;i<n;i++){
        printf("\n%s",arr[i]);
    }
}
*/


//Return that duplicate number
/*
#include <stdio.h>
int findDuplicates(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%d\n",findDuplicates(arr,n));
    }
    return 0;
}
*/


//Find pairs
/*
#include<stdio.h>
int pairSum(int arr[],int n,int t){
    int i,j;
    int cnt=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==t){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    int n,i,t;
    scanf("%d %d",&n,&t);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pairs=pairSum(arr,n,t);
    printf("%d",pairs);
}
*/

//Books in ascending order
/*
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The sorted book list \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/


//Factorial using recursion
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact=1;
    int i;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
}
*/


//Find the missing number
/*
#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int reqSum=(n*(n+1))/2;
    int ans=reqSum-sum;
    printf("%d",ans);
    return 0;
}
*/

//Standard University
/*
#include<stdio.h>
void sheet(int arr[7], int currRoll, int max){
    if(max==0)
        return;
    int i,j,k;
    for(i=0;i<max;i++){
        if(currRoll==arr[i]){
            printf("%d ",i);
            break;
        }
    }
    for(j=i;j<max;j++){
        arr[j]=arr[j+1];
    }
    sheet(arr,currRoll+1,max-1);
}
int main(){
 int arr[7],i;
 for(i=0;i<7;i++)scanf("%d",&arr[i]);
 sheet(arr,1,7);
}
*/

//Class of each IP address
/*
#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i>=0 && i<=127){
        printf("Class A IP Address");
    }
    else if(i>=128 && i<=191){
        printf("Class B IP Address");
    }
    else if(i>=192 && i<=224){
        printf("Class C IP Address");
    }
    else if(i>=225 && i<=239){
        printf("Class D IP Address");
    }
    else{
        printf("Class E IP Address");
    }
    return 0;
}
*/

//Reverse the Array
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

//Fibonacci number using recursion
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0)
        printf("%d",0);
    else if(n==1)
        printf("%d",1);
    else{
        int a=0;
        int b=1;
        int c,i;
        for(i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }
    return 0;
}
*/

//First and Last Digit
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int last=n%10;
    int first;
    while(n>0){
        first=n%10;
        n=n/10;
    }
    printf("%d %d",first,last);
    return 0;
}
*/

//Even multiplication
/*
#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int mul=1;
    for(i=1;i<=n;i++){
        if(i%2==0){
            mul*=i;
        }
    }
    printf("%d",mul);
}
*/

//Reverse the Number
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0,rem;
    while(n>0){
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    printf("%d",rev);
    return 0;
}
*/

//Digit Count
/*
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int cnt=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}
*/