#include <stdio.h>
#include <stdlib.h>

int main(){
/*
    Enter no. of values to be entered 5
    Enter values: 1 2 3 4 5
    Entered values are: 1 2 3 4 5 
    Enter updated value of n: 7   
    Previous address=13113512,new address=13113512
    Values are: 1 2 3 4 5 0 167772170 
*/
    int n;
    int *ptr;
    printf("Enter no. of values to be entered ");
    scanf("%d",&n);
    //ptr=(int *) malloc(n*sizeof(int));
    ptr=(int *) calloc(n,sizeof(int));
    printf("Enter values: ");
    for(int i=0;i<n;i++)
        scanf("%d",ptr+i);
    printf("Entered values are: ");
    for(int i=0;i<n;i++)
        printf("%d ",*ptr+i);
    printf("\nEnter updated value of n: ");
    scanf("%d",&n);
    int *ptr1=(int *) realloc(ptr,n*sizeof(int));
    printf("Previous address=%d,new address=%d",ptr,ptr1);
    printf("\nValues are: ");
    for(int i=0;i<n;i++)
        printf("%d ",*(ptr+i));
    free(ptr1);
}