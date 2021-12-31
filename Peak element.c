#include <stdio.h>
int main()
{
    int i, j, k, l, n;
    scanf("%d", &n);
    int x[n];
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    if(n>1){
        for(i=1; i<n-1; i++){
            if((x[i]>x[i-1])&&(x[i]>x[i+1])){
                printf("%d\t", x[i]);
            }
        }
    }
    return 0;
}