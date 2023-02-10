#include <stdio.h>
#include <math.h>

int main(){
    //Built-in functions
    double a=2,b=4,c=100;
    printf("%f %f",pow(a,b),log10(c));

    //Check Armstrong Number
    printf("\nEnter value of n: ");
    int n;
    scanf("%d",&n);
    int cnt=0;
    int x=n;
    while(x>0){
        cnt++;
        x=x/10;
    }
    printf("%d\n",cnt);
    printf("%d\n",n);
    int rem;
    float sum=0;
    int m=n;
    while(m>0){
        rem=m%10;
        m=m/10;
        float power=pow(rem,cnt);
        sum=sum+power;
    }
    printf("%.0f\n",sum);
    return 0;
}