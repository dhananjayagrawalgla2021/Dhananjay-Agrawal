#include<stdio.h>
int main(){
    int i, z=0, w=0, j, a, t;
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<a; i++){
        for(j=0; j<a-1-i; j++){
            if(x[j]<x[j+1]){
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
    for(i=0; i<a; i++){
        printf("%d\v", x[i]);
    }
    return 0;
}