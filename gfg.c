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
    printf("%d",sub_res);
    return 0;
}