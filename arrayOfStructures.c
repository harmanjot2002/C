#include <stdio.h>

struct student{
    int rollno;
    float marks;
    char name[20];
};

int main(){
    printf("Enter value of n:\n");
    int n;
    scanf("%d",&n);
    struct student s[n];
    printf("Enter data for n students where n is %d:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d %f %s",&s[i].rollno,&s[i].marks,&s[i].name);
    }
    printf("Entered data is:\n");
    for(int i=0;i<n;i++){
        printf("%d %f %s",s[i].rollno,s[i].marks,s[i].name);
        printf("\n");
    }

    /*
        Enter value of n:
        3
        Enter data for n students where n is 3:
        1 23.4 ha
        2 45.6 rt
        3 78 re
        Entered data is:
        1 23.400000 ha  
        2 45.599998 rt
        3 78.000000 re
    */
    return 0;
}