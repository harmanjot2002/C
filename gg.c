#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int rem=1;
    int sum=0;
    scanf("%d",&n);
    int cnt=0;
    int x=n;
    while(x>0){
        cnt++;
        x=x/10;
    }
    printf("%d",n);
    printf("\n%d",cnt);
    while(n>0){
        rem=n%10;
        n=n/10;
        sum=sum+pow(rem,cnt);
    }
    printf("\n%d",sum);
    return 0;
}