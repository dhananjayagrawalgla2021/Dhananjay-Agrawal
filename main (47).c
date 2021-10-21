#include <stdio.h>

int main()
{
    int t, a, b, c, d, e, f;
    scanf("%d", &t);
    a=t/365;
    b=t%365;
    printf("entered days =%d\n", t);
    printf("Number of years =%d\n", a);
    c=b/30;
    d=b%30;
    printf("Number of months =%d\n", c);
    printf("Number of days =%d\n", d);

    
    return 0;
}
