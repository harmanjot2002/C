#include <stdio.h>

union student{
    int rollno;
    float marks;
    char name;
};

int main(){
    union student s1;
    s1.rollno=1;
    s1.marks=23;
    s1.name='c';
    union student *ptr=&s1;
    printf("%d\n %f\n %c",ptr->rollno,ptr->marks,ptr->name);
    return 0;
}