#include <stdio.h>

int sum(int n){
    if(n==0 || n==1)
        return n;
    else    
        return (n+sum(n-1));
}

int sumOfEven(int n){
    if(n==0 || n==2)
        return n;
    else if(n%2==0)   
        return (n+sumOfEven(n-2));
    else if(n%2!=0){
        int m=n-1;
        return (m+sumOfEven(m-2));
    }
}

int main(){
    //WAP to accept a no. from user and print sum from 1 to that number.
    /*
    int sum=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
    */

    //Factorial
    /*
    int fact=1;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
    */

    //WAP to accept a number from user as a limit(no. of terms) and display those many terms in the fibonnaci format.
    /*
    int n;
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    printf("%d ",0);
    for(int i=2;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    */

    //WAP to find factorial using function
    int n;
    scanf("%d",&n);
    // int s=sum(n);
    // printf("%d",s); 
    int s=sumOfEven(n);
    printf("%d",s);
    return 0;
}
