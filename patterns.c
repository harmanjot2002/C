#include <stdio.h>
void main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    printf("\n");
    printf("Star Pattern-1");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    printf("Number Pattern-1");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");
    printf("Star Pattern-2");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    printf("Number Pattern-2");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");
    printf("Number Pattern-3");
    printf("\n");
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");
}