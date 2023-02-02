#include <stdio.h>
#include <math.h>

int nextPrime(int n)
{
    int flag = 1;
    if (n == 0 || n == 1)
    {
        printf("Not prime");
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}

int main()
{
    /*
    printf("%d \n",sizeof(3.12));
    printf("%d \n",sizeof(3.12f));

    float z=1.2;
    printf("%f",z);
    */

    // Day before n days
    /*
    int d=1;
    int n=1;
    int mod_res=n%7;
    int sub_res=d-mod_res;
    if(sub_res<0)
        sub_res+=7;
    printf("%d \n",sub_res);
    */

    // Largest of three numbers
    /*
    int a=2;
    int b=4;
    int c=7;
    if(a>=b && a>=c){
        printf("a is largest\n");
    }
    else if(b>=a && b>=c){
        printf("b is largest\n");
    }
    else{
        printf("c is largest\n");
    }
    */

    // Leap year or not
    /*
    int year=2100;
    if(year%4==0 && year%100!=0)
        printf("Leap year");
    else if(year%400==0)
        printf("Leap year\n");
    else
        printf("Not leap year\n");
    */

    // Simple Calculator
    /*
        operation x y O/P
        +         2 3  5
        -         2 3  -1
        *         2 3  6
        others    2 3  invalid operation
    */
    /*
     int op,x,y,ans;
     printf("Enter operation and value of two integers\n");
     scanf("%d %d %d",&op,&x,&y);
     switch(op){
         case(1):
             ans=x+y;
             printf("%d",x+y);
             break;
         case(2):
             ans=x-y;
             printf("%d",ans);
             break;
         case(3):
             ans=x*y;
             printf("%d",ans);
             break;
         default:
             printf("Invalid operation");
     }
     */
    // Smallest Divisor
    /*
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            printf("Smallest divisor is %d ",i);
            break;
        }
    }
    */

    // Print all the numbers from 1 to 10 that are not muliple of 3
    /*
    for(int i=1;i<=10;i++){
        if(i%3==0){
            continue;
        }
        printf("%d ",i);
    }
    */

    // Print tables of first n natural numbers
    /*
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=10;j++){
            printf("%d",i*j);
        }
        printf("\n");
    }
    */

    // Factorial of a number
    /*
    int n;
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
    */

    // Given number is prime or not
    /*
    int n;
    int flag = 1;
    scanf("%d", &n);
    if (n == 0 || n == 1){
        printf("Not prime");
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1)
        printf("Not prime");
    else
        printf("Prime");
    */

    // Next prime no.
    /*
     int n;
     scanf("%d",&n);
     for(int i=n+1;i<=n+10;i++){
         if(nextPrime(i)==0){
             printf("Next prime is %d ",i);
             break;
         }
     }
     */

    // All divisors of number
    /*
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     if(n%i==0){
         printf("%d ",i);
     }
    }
    */

    // GCD of 2 numbers
    /*
    int n,m;
    scanf("%d %d",&n,&m);
    int min,ans;
    if(n<m)
        min=n;
    else
        min=m;
    for(int i=1;i<=min;i++){
        if(n%i==0 && m%i==0){
            ans=i;
        }
    }
    printf("%d",ans);
    */

    // LCM of 2 numbers
    /*
    int n, m;
    scanf("%d %d",&n,&m);
    int max, ans;
    if (n > m)
        max = n;
    else
        max=m;
    for(int i=max;i<=m*n;i++){
        if(i%m==0 && i%n==0){
            ans=i;
            break;
        }
    }
    printf("%d",ans);
    */

    // Fibonacci series
    /*
     int n;
     scanf("%d", &n);
     int a = 1;
     int b = 1;
     int c;
     for (int i = 2; i <= n; i++){
         c=a+b;
         printf("%d ",c);
         a=b;
         b=c;
     }
     */

    // Count number of digits in a number
    /*
     int n;
     scanf("%d",&n);
     int count=0;
     while(n!=0){
         n=n/10;
         count++;
     }
     printf("%d",count);
     */

    // Table of a number 'n' upto 'm' index
    /*
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++){
        printf("%d ",n*i);
    }
    */

    // Size and number of elements in array
    /*
    int arr[]={3,4,5,6,7};
    int sz=sizeof(arr);
    printf("%zu\n",sz);
    int cnt=sizeof(arr)/sizeof(arr[0]);
    printf("%zu",cnt);
    */

    // Check sorted array
    /*
    int n;
    scanf("%d",&n);
    int flag=1;
    int arr[n];
    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
     if(arr[i]<arr[i-1]){
         flag=0;
         break;
     }
    }
    if(flag==0){
         printf("Not sorted\n");
    }
    else{
     printf("Sorted\n");
    }
    */

    // Count distinct elements in array
    /*
    int n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    int freq[]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int )
    }
    printf("%d",count);
    */

    // Sum and average of array
    /*
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d\n",sum);
    float avg=sum/n;
    printf("%g",avg);
    */

    // Maximum in an array
    /*
    int n;
    scanf("%d", &n);
    int arr[n];
    int max;
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++){
        if (arr[i] > arr[i - 1]){
            max = arr[i];
        }
    }
    printf("%d", max);
    */

    return 0;
}