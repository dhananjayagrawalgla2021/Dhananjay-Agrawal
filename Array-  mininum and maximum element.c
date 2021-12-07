#include <stdio.h>

int main()
{
    int i, a, max=0, min=0;
    printf("Enter array size");
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", & x[i]);
    }
    for(i=0; i<a; i++){
        if(max<x[i]){
            max=x[i];
        }
        if(x[0]>x[i]){
            min=x[i];
        }
    }
    printf("MAX %d\nMIN %d", max, min);

    return 0;
}