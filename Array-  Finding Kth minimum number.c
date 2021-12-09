#include <stdio.h>
int main()
{
    int i, j, k, t, a;
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    printf("Enter K");
    scanf("%d", &k);
    for(i=0; i<=k; i++){
        for(j=i; j<a; j++){
            if(x[i]>x[j]){
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    printf("%d", x[k-1]);
    return 0;
}
