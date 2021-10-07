#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t,SI;
    printf("Enter Principal Value, Time and Rate");
    scanf("%f%f%f", &p, &r, &t);
    SI=((p*r*t)/100)+p;
    printf("average %f",SI);

    return 0;
}
