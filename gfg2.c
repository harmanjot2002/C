#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

void prime(int n){
    int c=2;
    while(n>1){
        if(n%c==0){
            printf("%d ",c);
            n/=c;
        }
        else{
            c++;
        }
    }
}
int cmp(const void *p1,const void *p2){
    int x1=*(const int*) p1;
    int x2=*(const int*) p2;
    return (x1-x2);
}

int main(){
    //Built-in functions
    double a=2,b=4,c=100;
    printf("%f %f",pow(a,b),log10(c));

    //Check Armstrong Number
    /*
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
    */

    // fun(10);

    //Find first digit of a number
    /*
    int n;
    printf("\n");
    scanf("%d",&n);
    while(n>10){
        n=n/10;
    }
    printf("%d",n);
    */

   //Prime factors of a number
   /*
    int n;
    printf("\n");
    scanf("%d",&n); 
    prime(n);
    */

   int arr[]={-20,10,-30,5};
   printf("\n");
   qsort(arr,4,sizeof(arr[0]),cmp);
   for(int i=0;i<4;i++){
    printf("%d ",arr[i]);
   }
    return 0;
}

void fun(int x){
    printf("Value of x is %d ",x);
}