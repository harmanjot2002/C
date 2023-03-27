//Sunio being the richest among his gang decided to open a Swiss Bank Account where after filling all the formalities,he was asked to enter the pincode in such a way that it must be a happy-four digit number.You being Shizuka help Sunio to create a list of all happy four digit numbers from which he can choose.

#include <stdio.h>

/*
int main(){
    int n;
    int rem,cnt=0;
    for(int i=1000;i<9999;i++){
        n=i;
        int ans=n;
        while(ans>9){
            ans=0;
            while(n!=0){
                rem=n%10;
                ans=ans+ rem*rem;
                n=n/10;
            }
            if(ans==1){
                printf("Happy Number %d \n",i);
                cnt++;
            }
            n=ans;
        }
    }
    printf("count : %d",cnt);
}
*/
//Nobita and Doraemon visited India and unfortunately doraemon's battery run out of charge.Since his batteries are not available in 21st century,you being a desi engineer use some jugad have created a mechanism to insert present-day batteries in the battery comapartment.Write a program in C to find the length and breadth of doraemon battery compartment and you have prepared square cells whose cells needs to be maximum so that all the space inside the doraemon's battery.
/*
int main(){
    int l,b;
    scanf("%d %d",&l,&b);
    int diff,ans;
    if(l<b)
        diff=l;
    else
        diff=b;
    for(int i=2;i<=diff;i++){
        if(l%i==0 && b%i==0){
            ans=i;
        }
        printf("Size of each square is: %d",ans);
    }
    int area=l*b;
    printf("No. of squares is: %d",area/(ans*ans));
    return 0;
}
*/

/*
WAP to accept a number and check wheter it is a :
a)buzz no. or not(No. that is divisible by 7 and ends with 7)
b)prime or not
c)palindrome or not
d)armstrong or not(power is 3)
e)perfect or not(Sum and product of factors of no. must be equal,e.g.6,28)
f)duck no. or not(Any no. that is either 0 or has a 0 somewhere in between the number)
g)twisted prime(Reverse of a no. is also prime,e.g,167)
h)twin prime or not(Accept 2 numbers)(Both numbers are prime,but gap between 2 numbers should be equal to 2,e.g,5 and 7)
i)police or not(Poore no. ke andar kabhi 100 mil jata hai,toh this is police no.,e.g.3410023)
ii)Automorphic
j)Rajnikant no. or not
jj)Magic
jjj)Tech no.
k)Narcissist no. or not(same as armstrong,butpower is equal to no. of digits)
l)Neon(Square of given no.'s sum of digit must be equal to number,e.g.9)
m)Happy
n)Niven(Harshad)(No. which is divisible by sum of digits,e.g.18)
o)Pal prime(Palindrome+Prime)
p)Ugly prime 
q)Kapriker
*/
