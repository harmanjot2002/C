#include <stdio.h>
int main(){

    /*
    //Print 2-D array and sum of all its elements.
    int a[2][3],i,j,sum=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d \t",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");
    }
    printf("sum is: %d \n",sum);
    */

    //Transpose of matrix
    int a[2][3],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d \t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}