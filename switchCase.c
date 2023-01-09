#include <stdio.h>
int main(){
    printf("Gender Check \n");
    printf("M:Male\nF:Female\n");
    char c;
    scanf("%c",&c);
    switch(c){
        case 'M': case 'm':
            printf("Male");
            break;
        case 'F': case 'f':
            printf("Female");
            break;
        default:
            printf("Others");
    }

    printf("\n \t Food Item\tprice\n1\tNoodles\t\t200\n2\tPizza\t\t320\n3\tSandwich\t80\n4\tCoffee\t\t60\n5\tJuice\t\t90\n");
    int n,m,p;
    printf("Enter item no.\n");
    scanf("%d",&n);
    printf("Enter number of items selected\n");
    scanf("%d",&p);
    switch(n){
        case 1:
            printf("Noodles");
            m=200;
            break;
        case 2:
            printf("Pizza");
            m=320;
            break;
        case 3:
            printf("Sandwich");
            m=80;
            break;
        case 4:
            printf("Coffee");
            m=60;
            break;
        case 5:
            printf("Juice");
            m=90;
            break;
    }
    printf("\n %d",m*p);
}