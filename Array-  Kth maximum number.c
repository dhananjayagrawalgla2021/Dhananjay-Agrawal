#include <stdio.h>
int main()
{
    int i, min, max=0, j, k, t, a, mini, maxi;
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    printf("enter k");
    scanf("%d", &k);
    for(i=0; i<k; i++){
        for(j=0; j<a-i-1; j++){
            if(x[a-i-1]<x[j]){
                t=x[a-i-1];
                x[a-i-1]=x[j];
                x[j]=t;
            }
        }
    }
    for(i=0; i<a; i++){
        printf("%d\t", x[i]);
    }
    
    printf("\nKth maximum number is%d", x[a-k]);
    return 0;
}