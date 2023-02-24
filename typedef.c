#include <stdio.h>

typedef struct student{
    int rollno;
    float marks;
    char name[20];
}stu;

int main(){
    stu s1={2,34.5,"Harman"};
    printf("%d\n",s1.rollno);
    printf("%f\n",s1.marks);
    printf("%s\n",s1.name);
    return 0;
}