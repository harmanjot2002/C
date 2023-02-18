#include <stdio.h>
#include <stdlib.h>

int main(){
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