
#include <stdio.h>
int main(){
	enum { sun, mon, tue, wed, thr, fri, sat};
	int a;
	printf("enter any day:\n");
	scanf("%d",&a);
	switch(a){
        case sun: 
            printf("have fun");
            break;
        case mon:
            printf("show up");
            break;
        case tue: 
            printf("show up everyday");
            break;
        case wed: 
            printf("show up everyday");
            break;
        case thr: 
            printf("keep showing up");
            break;
        case fri: 
            printf("last mile, cheers");
            break;
        case sat: 
            printf("wohoo!! you did it:-)");
            break;
        default: 
            printf("try typing 0 to 6");
    }
}