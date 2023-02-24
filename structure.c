#include <stdio.h>

struct student{
    int rollno;
    float marks;
    char name[20];
}s={1,12.3,"Jiya"};

int main(){
    struct student s1={2,34.5,"Harman"};
    struct student s2;
    printf("%d\n",sizeof(s));
    printf("%d\n",s.rollno);
    s2=s1;
    printf("%d\n",s2.rollno);
    return 0;
}