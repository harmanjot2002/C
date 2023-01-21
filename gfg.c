#include <stdio.h>
int main(){
    printf("%d \n",sizeof(3.12));
    printf("%d \n",sizeof(3.12f));

    float z=1.2;
    printf("%f",z);

    //Day before n days
    int d=1;
    int n=1;
    int mod_res=n%7;
    int sub_res=d-mod_res;
    if(sub_res<0)
        sub_res+=7;
    printf("%d \n",sub_res);

    //Largest of three numbers
    int a=2;
    int b=4;
    int c=7;
    if(a>=b && a>=c){
        printf("a is largest");
    }
    else if(b>=a && b>=c){
        printf("b is largest");
    }
    else{
        printf("c is largest");
    }

    //Leap year or not
    int year=2100;
    if(year%4==0 && year%100!=0)
        printf("Leap year");
    else if(year%400==0)
        printf("Leap year\n");
    else
        printf("Not leap year\n");

    //Simple Calculator
    /*
        operation x y O/P
        +         2 3  5
        -         2 3  -1
        *         2 3  6
        others    2 3  invalid operation
    */
    int op,x,y,ans;
    printf("Enter operation and value of two integers\n");
    scanf("%d %d %d",&op,&x,&y);
    switch(op){
        case(1):
            ans=x+y;
            printf(ans);
        case(2):
            ans=x-y;
            printf(ans);
        case(3):
            ans=x*y;
            printf(ans);
        default:
            printf("Invalid operation");
    }
    return 0;
}