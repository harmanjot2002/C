#include <stdio.h>
void main(){
    /*
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

    printf("\n");
    printf("Alphabet Pattern-1");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }

    printf("\n");
    printf("Alphabet Pattern-2");
    printf("\n");
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }

    printf("\n");
    printf("Alphabet Pattern-3");
    printf("\n");
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c",64+i);
        }
        printf("\n");
    }

    printf("\n");
    printf("Alphabet Pattern-4");
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",64+i);
        }
        printf("\n");
    }
    */

   //Javatpoint
    /*
        5
        11111
        1   1
        1   1
        1   1
        11111
    */
   /*
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n){
                printf("1");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    */


   /*
    5
    12345
    1234
    123
    12
    1
 */
/*
   int n;
   scanf("%d",&n);
   for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
   }
*/

/*
5
*****
 *****
  *****
   *****
    *****
*/
/*
int n;
scanf("%d",&n);
for(int i=n;i>=1;i--){
    for(int s=1;s<=n-i;s++){
        printf(" ");
    }
    for(int j=1;j<=n;j++){
        printf("*");
    }
    printf("\n");
}
*/

/*
5
*********
 ******* 
  *****  
   ***   
    *  
*/
/*
int n;
scanf("%d",&n);
for(int i=n;i>=1;i--){
    for(int s=1;s<=n-i;s++){
        printf(" ");
    }
    for(int j=2*i-1;j>=1;j--){
        printf("*");
    }
    printf("\n");
}*/

//Pascal's Triangle
/*
5
     1     
    1 1    
   1 2 1   
  1 3 3 1  
 1 4 6 4 1 
*/
/*
int n,c;
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        printf(" ");
    }
    for(int k=0;k<=i;k++){
        if(i==0 || k==0){
            c=1;
        }
        else{
            c=(c*(i-k+1))/k;
        }
        printf("%d ",c);
    }
    printf("\n");
}
*/



/*
5
     *****
    ****  
   ***    
  **      
 *        
*
 **       
  ***
   ****
    *****
*/
/*
int n;
scanf("%d",&n);
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=i-1;j++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
*/

//Plus pattern
/*
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i==n/2+1){
        for(int j=1;j<=n;j++){
            printf("+");
        }
    }
    else{
        for(int k=1;k<=n/2;k++){
            printf(" ");
        }
        printf("+");
    }
    printf("\n");
}
*/

//X-Pattern
int n;
scanf("%d",&n);
}