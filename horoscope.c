#include <stdio.h>
enum days { SUN, MON, TUE, WED=7, THU, FRI, SAT };
int main() {
enum days d = TUE;
printf("%d", THU);
return 0;
}
