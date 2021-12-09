#include <stdio.h>
int main()
{
    int i, min, max=0, j, k, t, a, mini, maxi;
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    min=x[0];
    for(i=0; i<a; i++){
        if(min>x[i]){
            min=x[i];
            mini=i;
        }
        
    }
    for(j=0; j<a; j++){
        if(max<x[j]){
            max=x[j];
            maxi=j;
        }
    }
    
  //  printf("%d %d--%d %d", min, max, maxi, mini);
    t=x[mini];
    x[mini]=x[maxi];
    x[maxi]=t;
    for(i=0; i<a; i++){
        printf("\t%d\t", x[i]);
    }
    return 0;
}