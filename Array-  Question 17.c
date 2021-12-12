#include<stdio.h>
int main(){
    int i, z=0, w=0, j, a, t;
    scanf("%d", &a);
    int x[a+1];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    printf("Print number and its index");
    scanf("%d%d", &j, &t);
    for(i=a; i>t; i--){
        x[i]=x[i-1];
    }
    x[t]=j;
    for(i=0; i<a+1; i++){
        printf("%d\t", x[i]);
    }
    return 0;
}