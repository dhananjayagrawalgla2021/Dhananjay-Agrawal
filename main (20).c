#include <stdio.h>

int main()
{
    float cmlen, m, kil;
    scanf("%f", &cmlen);
    m=cmlen/100;
    kil=cmlen/10000;
    printf("\n METER %f \n KILOMETER %f", m, kil);

    return 0;
}
