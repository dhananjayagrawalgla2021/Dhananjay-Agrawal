#include <stdio.h>
int main()
{
    int i, j, a, b, n, m;
    int x[30];
    int y[30];
    for(i=0; i<30; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<30; i++){
        y[i]=x[i];
    }
    for(i=0; i<30; i++){
        printf("%d", y[i]);
    }
    return 0;
}
