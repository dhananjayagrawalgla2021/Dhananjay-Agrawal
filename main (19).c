#include <stdio.h>

int main()
{
    float r,d,cir,area;
    scanf("%f", &r);
    d=2*r;
    cir=2*3.14*r;
    area=3.14*r*r;
    printf("\n DIAMETER %f \n CIRCUMFERENCE %f \n AREA %f", d, cir, area);

    return 0;
}
