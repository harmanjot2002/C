#include <stdio.h>
#include <math.h>

int main(){
    //Check Armstrong Number
    int n;
    scanf("%d",&n);
    int cnt=0;
    int x=n;
    int m=n;
    while(x>0){
        cnt++;
        x=x/10;
    }
    printf("%d\n",cnt);
    printf("%d\n",m);
    int rem=0;
    int sum=0;
    while(m>0){
        rem=m%10;
        m=m/10;
        sum+=pow(rem,cnt);
        printf("%d ",sum);
    }
    printf("%d\n",sum);
    // int n;
    // int rem=1;
    // int sum=0;
    // scanf("%d",&n);
    // int cnt=0;
    // int x=n;
    // while(x>0){
    //     cnt++;
    //     x=x/10;
    // }
    // printf("%d",n);
    // printf("\n%d",cnt);
    // while(n>0){
    //     rem=n%10;
    //     n=n/10;
    //     sum=sum+pow(rem,cnt);
    // }
    // printf("\n%d",sum);
    return 0;
}