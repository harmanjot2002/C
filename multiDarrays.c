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


   /*
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
    */

   
    //Sum of individual rows and columns
    /*
        I/P:1 2 1 2 3 5 0 5 -1
        O/P:sr=4,sc=3 
            sr=10,sc=10 
            sr=4,sc=5 
    */
   /*
    int a[3][3],i,j,sc,sr;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        sc=sr=0;
        for(j=0;j<3;j++){
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("sr=%d,sc=%d \n",sr,sc);
    }
    */


    //Sum of 2 matrices
    /*
        Enter values of first matrix: 1 2 3 1 0 1
        Enter values of second matrix: 1 1 1 1 1 1
        Resultant matrix is: 
        2       3       4 
        2       1       2 
    */
   /*
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("Enter values of first matrix: ");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter values of second matrix: ");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Resultant matrix is: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    */

   //Matrix Multiplication
    int a[3][3],b[3][2],c[3][2],i,j,k,sum;
    printf("Enter values of first matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter values of second matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            sum=0;
            for(k=0;k<3;k++){
                sum+=(a[i][k]*b[k][j]);
                c[i][j]=sum;
            }
        }
    }
    printf("Resultant matrix is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d \n",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}