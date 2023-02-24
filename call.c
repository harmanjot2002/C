//Write a  program to access 2 numbers from the user in the main function ND PASS THE VALUES TO A FUN. CAlled swap which will be non return type and display the swap values.

void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
}
int main(){
    int a=12;
    int b=16;
    swap(a,b);
}
/* 
write a program to accept a value from the user in the main function in a variable called m and pass the variable too a function called increment
where the value of m would be increased by 1.
In both the functions print the value of m nd the address of m .
 
void inc(int m){
    m=m+1;
    printf("the value of m in inc fun is: %d\n",m);
     printf("the address of m in inc fun is: %p\n",&m);
}
int main(){
    int m=5;
    inc(m);
    printf("the value of m in main fun is: %d\n",m);
    printf("the address of m in main fun is: %p",&m);
}
*/

