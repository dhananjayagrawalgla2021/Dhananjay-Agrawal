#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, ci;
    printf("Enter Principal amount, rate and time in this order");
    scanf("%f%f%f", &p, &r, &t);
    ci=p*(pow((1+r/100),t));
    printf("Compound interest = %f", ci);

    return 0;
}
