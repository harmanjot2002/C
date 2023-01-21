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
        printf("Leap year");
    else
        printf("Not leap year");
    return 0;
}