#include <stdio.h>
int main()
{
    int i, a, z, max=0, min=0, t, b;
    printf("Enter array size");
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", & x[i]);
    }
    z=0; b=a-1;
    while(b>z){
        t=x[z];
        x[z]=x[b];
        x[b]=t;
        z++; b--;
    }
    for(i=0; i<a; i++){
    printf("%d\t", x[i]);
    }
    return 0;
}