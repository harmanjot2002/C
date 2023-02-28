//WAP to assign a details (name,roll no.,marks of C,marks of Java,marks of DBMS,average of the three subjects and address) of your and your friends using structure and display the results.

#include <stdio.h>
#include <string.h>

struct{
    int empid;
    char *empname;
    int empage;
    int empsalary;
}emp1,emp2;


/*
struct{
    char *name;
    int rollno,C,Java,DBMS;
    float avg;
    char *addr;
}stu1,stu2;
*/


void main(){
    scanf("%d %d",emp1.empid,emp2.empid);
    scanf("%s %s",emp1.empname,emp2.empname);
    scanf("%d %d",emp1.empage,emp2.empage);
    scanf("%d %d",emp1.empsalary,emp2.empsalary);

    /*
    stu1.name;
    stu1.rollno;
    stu1.C;
    stu1.Java;
    stu1.DBMS;
    stu1.addr="Fdk";
    float avg1=stu1.C+stu1.Java+stu1.DBMS/3;
    stu1.avg=avg1;

    stu2.rollno=2;
    stu2.name="Navreet Kaur";
    stu2.C=41;
    stu2.Java=65;
    stu2.DBMS=37;
    stu2.addr="Ferozpur";
    float avg2=stu2.C+stu2.Java+stu2.DBMS/3;
    stu2.avg=avg2;

    printf("Details of first student are:\n");
    char* nm;
    scanf("%s",&nm);
    strcpy(stu1.name,nm);
    scanf("%d",&stu1.rollno);
    scanf("%d",&stu1.C);
    scanf("%d",&stu1.Java);
    scanf("%d",&stu1.DBMS);


    printf("rollno:%d\nName:%s\nMarks in C:%d\nMarks in Java:%d\nMarks in DBMS:%d\nAddress:%s\nAverage:%f\n",stu1.rollno,stu1.name,stu1.C,stu1.Java,stu1.DBMS,stu1.addr,stu1.avg);

    printf("Details of second student are:\n");
    printf("rollno:%d\nName:%s\nMarks in C:%d\nMarks in Java:%d\nMarks in DBMS:%d\nAddress:%s\nAverage:%f\n",stu2.rollno,stu2.name,stu2.C,stu2.Java,stu2.DBMS,stu2.addr,stu2.avg);
    */
}