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
    printf("Star Pattern-3");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    printf("Number Pattern-4");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n");
    printf("Number Pattern-5");
    printf("\n");
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }

    printf("\n");
    printf("Star Pattern-4");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    printf("Star Pattern-5");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    printf("Star Pattern-6");
    printf("\n");
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    printf("Star Pattern-7");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    printf("Star Pattern-8");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}