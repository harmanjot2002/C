// // //WAP to assign a details (name,roll no.,marks of C,marks of Java,marks of DBMS,average of the three subjects and address) of your and your friends using structure and display the results.

// // #include <stdio.h>
// // #include <string.h>

// // struct{
// //     int empid;
// //     char *empname;
// //     int empage;
// //     int empsalary;
// // }emp1,emp2;


// // /*
// // struct{
// //     char *name;
// //     int rollno,C,Java,DBMS;
// //     float avg;
// //     char *addr;
// // }stu1,stu2;
// // */


// // void main(){
// //     scanf("%d %d",emp1.empid,emp2.empid);
// //     scanf("%s %s",emp1.empname,emp2.empname);
// //     scanf("%d %d",emp1.empage,emp2.empage);
// //     scanf("%d %d",emp1.empsalary,emp2.empsalary);

// //     /*
// //     stu1.name;
// //     stu1.rollno;
// //     stu1.C;
// //     stu1.Java;
// //     stu1.DBMS;
// //     stu1.addr="Fdk";
// //     float avg1=stu1.C+stu1.Java+stu1.DBMS/3;
// //     stu1.avg=avg1;

// //     stu2.rollno=2;
// //     stu2.name="Navreet Kaur";
// //     stu2.C=41;
// //     stu2.Java=65;
// //     stu2.DBMS=37;
// //     stu2.addr="Ferozpur";
// //     float avg2=stu2.C+stu2.Java+stu2.DBMS/3;
// //     stu2.avg=avg2;

// //     printf("Details of first student are:\n");
// //     char* nm;
// //     scanf("%s",&nm);
// //     strcpy(stu1.name,nm);
// //     scanf("%d",&stu1.rollno);
// //     scanf("%d",&stu1.C);
// //     scanf("%d",&stu1.Java);
// //     scanf("%d",&stu1.DBMS);


// //     printf("rollno:%d\nName:%s\nMarks in C:%d\nMarks in Java:%d\nMarks in DBMS:%d\nAddress:%s\nAverage:%f\n",stu1.rollno,stu1.name,stu1.C,stu1.Java,stu1.DBMS,stu1.addr,stu1.avg);

// //     printf("Details of second student are:\n");
// //     printf("rollno:%d\nName:%s\nMarks in C:%d\nMarks in Java:%d\nMarks in DBMS:%d\nAddress:%s\nAverage:%f\n",stu2.rollno,stu2.name,stu2.C,stu2.Java,stu2.DBMS,stu2.addr,stu2.avg);
// //     */
// // }

// #include<stdio.h>
// struct
// {
//     int roll;
//     char name[100];
//     int s1,s2,s3;
//     float avg;
// }st1,st2;
// int main()
// {
//     char temp[100];
//     printf("Enter roll no of student 1 ");
//     scanf("%d",&st1.roll);
//     printf("Enter name of student 1 ");
//     gets(temp);
//     strcpy(st1.name,temp);
//     scanf("%s",st1.name);
//     printf("Enter marks of student 1 ");
//     scanf("%d %d %d",&st1.s1,&st1.s2,&st1.s3);
//     st1.avg=(st1.s1+st1.s2+st1.s3)/3;
    
//     printf("Enter roll no of student 2 ");
//     scanf("%d",&st2.roll);
//     printf("Enter name of student 2 ");
//     gets(temp);
//     strcpy(st2.name,temp);
//     scanf("%s",st2.name);
//     printf("Enter marks of student 2 ");
//     scanf("%d %d %d",&st2.s1,&st2.s2,&st2.s3);
//     st2.avg=(st2.s1+st2.s2+st2.s3)/3;

//     printf("Student 1 roll: %d\n",st1.roll);
//     printf("Student 1 name:%s\n",st1.name);
//     printf("Student 1 subj1 marks:%d\n",st1.s1);
//     printf("Student 1 subj2 marks:%d\n",st1.s2);
//     printf("Student 1 subj3 marks:%d\n",st1.s3);
//     printf("Student 1 average marks:%f\n\n",st1.avg);

//     printf("Student 2 roll: %d\n",st2.roll);
//     printf("Student 2 name:%s\n",st2.name);
//     printf("Student 2 subj1 marks:%d\n",st2.s1);
//     printf("Student 2 subj2 marks:%d\n",st2.s2);
//     printf("Student 2 subj3 marks:%d\n",st2.s3);
//     printf("Student 2 average marks:%f\n",st2.avg);

//     return 0;
// }
#include<stdio.h>

struct emp{
    int EID;
    char *name;
    int age;
    int salary;
};
void manager(){
    struct emp mng;
    mng.EID=12;
    mng.name="Harmanjot Kaur";
    mng.age=12;
    printf("%d %s %d\n",mng.EID,mng.name,mng.age);
    if(mng.age>30){
        printf("Salary is 65000");
    }
    else{
        printf("Salary is 50000");
    }
}
int main(){
    printf("Details of employee\n");
    manager();
}