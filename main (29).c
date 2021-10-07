#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,e,f;
    printf("Enter marks of 5 subjects");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    f=(a+b+c+d+e)/5;
    printf("average %f",f);

    return 0;
}
