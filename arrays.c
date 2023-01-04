#include <stdio.h>
#define N 5;
int main(){
    int b;
    int c[b=5/2];
    //int s[];
    int d[2*3];
    // int s[-5];

    int ba[]={9,0,8,7,6};
    int s[5]={};
    int a[5]={0};
    for(int i=0;i<5;i++){
        printf("%d ",s[i]);
    }

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
}
