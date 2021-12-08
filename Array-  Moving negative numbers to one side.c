#include <stdio.h>

int main()
{
    int a, min=0, c, t, i, j, b=0;
    printf("Enter array size");
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    
    for(i=0; i<a; i++){
        if(x[i]<0){
            t=x[i];
            x[i]=x[b];
            x[b]=t;
            b++;
        }
    }
    
    for(i=0; i<a; i++){
        printf("%d", x[i]);
    }
    return 0;
}
