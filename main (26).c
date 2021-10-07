#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter 2 angles");
    scanf("%d%d", &a,&b);
    c=180-(a+b);
    printf("Third angle is %d",c);

    return 0;
}
