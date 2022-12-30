#include <stdio.h>
#include <conio.h>
void main(){
    int a,b,sum;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("%d \n",sum);

    int x=1234;
    printf("%d \n",x);
    printf("%6d \n",x);
    printf("%-6d \n",x);
    printf("%06d \n",x);

    float y=1234.3456;
    printf("%f \n",y);
    printf("%10.2f \n",y);
    printf("%-10.2f \n",y);
    printf("%5.2f \n",y);
}