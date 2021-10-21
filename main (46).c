#include <stdio.h>

int main()
{
    int t, a, b, c, d, e, f;
    scanf("%d", &t);
    a=t/3600;
    b=t%3600;
    printf("entered seconds =%d\n", t);
    printf("Number of hours =%d\n", a);
    c=b/60;
    d=b%60;
    printf("Number of minutes =%d\n", c);
    printf("Number of seconds =%d\n", d);

    
    return 0;
}
