#include <stdio.h>

struct student{
    int rollno;
    float marks;
    char name[20];
}s={1,12.3,"Jiya"};

int main(){
    struct student s1={2,34.5,"Harman"};
    struct student s2;
    struct student s3;
    printf("%d\n",sizeof(s));
    printf("%d\n",s.rollno);
    s2=s1;
    printf("%d\n",s2.rollno);
    printf("Enter info about s3:\n");
    scanf("%d",&s3.rollno);
    scanf("%s",&s3.name);
    scanf("%f",&s3.marks);
    printf("%d\n",s3.rollno);
    printf("%f\n",s3.marks);
    printf("%s\n",s3.name);
    return 0;
}