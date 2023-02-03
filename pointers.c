#include <stdio.h>
int main()
{
    /*
    int a[]={3,2,67,0,56};
    int *p;
    */
    /*
    p=a;
    printf("%d %d",*p++,*p++);
    */
    /*
    p=&a[2];
    printf("%d %d %d",--(*p),--(*p),--(*p));
    */

    /*
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    q=&a[0]+3;
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
    printf("%d\n",*p);
    printf("%d\n",(*p)++);
    printf("%d\n",(*p)++);
    q--;
    printf("%d\n",(*(q+2))--);
    printf("%d\n",*(p+2)-2);
    printf("%d\n",*(p++ -2)-1);
    */

   const int a=-11;
   int *p=&a;
   *p=10;
   printf("%d",a);
    return 0;
}