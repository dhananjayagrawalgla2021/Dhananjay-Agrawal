#include <stdio.h>
int main()
{
    int a, i, j, t;
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    t=x[a-1];
    for(i=a-1; i>=0; i--){
        x[i]=x[i-1];
    }
    x[0]=t;
    for(i=0; i<a; i++){
        printf("%d\t", x[i]);
    }
    return 0;
}