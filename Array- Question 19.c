#include<stdio.h>
int main(){
    int i, z=0, w=0, j, a, t;
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    scanf("%d", &t);
    printf("%d", x[t-1]);
    for(i=t-1; i<a-1; i++){
        x[i]=x[i+1];
    }
    printf("\n");
    for(i=0; i<a-1; i++){
        printf("%d", x[i]);
    }
    return 0;
}