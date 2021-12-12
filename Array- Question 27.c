#include <stdio.h>
int main()
{
    int i, j, a, b=0, n, m=0;
    scanf("%d", &a);
    int x[a];
    int y[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
        y[i]=b;
    }
    for(i=0; i<a; i++){
        if(x[i]==6||x[i]==28||x[i]==496||x[i]==8128){
            y[i]=1;
        }
    }
    printf("n");
    for(i=0; i<a; i++){
        if(y[i]==0){
            printf("%d", x[i]);
        }
    }
    return 0;
}