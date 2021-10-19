
#include <stdio.h>
int main()
{
    int bs, ta, hra, total;
    scanf("%d", &bs);
    ta=bs*20/100;
    hra=bs*15/100;
    total=ta+hra+bs;
    printf("T.A. is %d and H.R.A. is %d\nTotal salary after adding T.A. and H.R.A is %d", ta, hra, total );

    return 0;
}
