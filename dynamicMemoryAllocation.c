#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    printf("Enter no. of values to be entered ");
    scanf("%d",&n);
    ptr=(int *) malloc(n*sizeof(int));
    printf("Enter values: ");
    for(int i=0;i<n;i++)
        scanf("%d",ptr+i);
    printf("Entered values are: ");
    for(int i=0;i<n;i++)
        printf("%d ",*ptr+i);
    free(ptr);
}