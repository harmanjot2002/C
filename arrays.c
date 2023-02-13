#include <stdio.h>
#define N 5;
int main(){
    /*
    int b;
    int c[b=5/2];
    //int s[];
    int d[2*3];
    // int s[-5];
    */

   /*
    int ba[]={9,0,8,7,6};
    int s[5]={};
    int a[5]={0};
    for(int i=0;i<5;i++){
        printf("%d ",s[i]);
    }
    */

   /*
    //Sum nd average of 5 students
    int marks[5];
    float sum=0.0;
    float avg;
    printf("\nEnter marks of 5 subjects: ");
    for(int i=0;i<5;i++)
        scanf("%d",&marks[i]);
    for(int i=0;i<5;i++){
        sum+=marks[i];
    }
    avg=sum/5;
    printf("%f %f \n",sum,avg);
    */

   /*
    //Count total no. of even and odd elements
    int arr[10];
    int even=0,odd=0;
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<10;i++){
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even are %d",even);
    printf("\nodd are %d",odd);
    */

   /*
    //Sum of 2 arrays
    int a1[5];
    int a2[5];
    int sumArr[5];
    printf("\nEnter values of first array: ");
    for(int i=0;i<5;i++)
        scanf("%d",&a1[i]);
    printf("Enter values of second array: ");
    for(int i=0;i<5;i++)
        scanf("%d",&a2[i]);
    for(int i=0;i<5;i++){
        sumArr[i]=a1[i]+a2[i];
        printf("Sum at index %d is %d\n",i,sumArr[i]);
    }
    */

   
    //Sort an array
    /*
    int n2;
    printf("Enter elements in array: ");
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n2;i++){
        for(int j=i+1;j<n2;j++){
            if(arr2[i]>arr2[j]){
                int t=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=t;
            }
        }
    }
    for(int i=0;i<n2;i++){
        printf("%d ",arr2[i]);
    }
    */

   //Sum of 2 matrix
   /*
    int a[2][3],b[2][3],c[2][3],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    */

   //Transpose of a matrix
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
