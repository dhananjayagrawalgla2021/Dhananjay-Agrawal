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
        for(j=i+1; j<a; j++){
            if(x[i]==x[j]){
                y[i]=1;
                y[j]=1;
                m++;
            }
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