#include <stdio.h>

void display();
void add();
void sub();
void add1(int a1,int b1);
void fact(int n);
void word(int m);
void prime(int n);


void main(){
    /*
    display();
    printf("\n");
    add();
    printf("\n");
    sub();
    printf("\n");
    int a;int b;
    scanf("%d %d",&a,&b);
    add1(a,b);
    printf("\n");
    int n;
    scanf("%d",&n);
    fact(n);
    printf("\n");
    int m;
    scanf("%d",&m);
    int rev=0;
    while(m>0){
        rev=rev*10+m%10;
        m=m/10;
    }
    m=rev;
    word(m);
    */

   //Prime factors of a number
   /*
        100
        2 2 5 5 
   */
    /*
    int n;
    printf("\n");
    scanf("%d",&n); 
    prime(n);
    */
}

void display(){
    printf("Hello world!");
}
void add(){
   int a,b,c;
   a=5;
   b=6;
   c=a+b;
   printf("%d",c);
}
void sub(){
   int a,b,c;
   a=5;
   b=6;
   c=a-b;
   printf("%d",c);
}
void add1(int a1,int b1){
    int c1=a1+b1;
    printf("%d",c1);
}
void fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
}


void word(int m){
    while(m>0){
        switch(m%10){
            case 0:
                printf("Zero");
                break;
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
        }
        m=m/10;
    }
}

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