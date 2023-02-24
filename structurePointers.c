#include <stdio.h>

struct student{
    int rollno;
    float marks;
    char name[20];
};

int main(){
    struct student s1={2,34.5,"Harman"};
    struct student *ptr=&s1;
    printf("%f\n",ptr->marks);
    printf("%d\n",ptr->rollno);
    printf("%s\n",ptr->name);
    return 0;
}