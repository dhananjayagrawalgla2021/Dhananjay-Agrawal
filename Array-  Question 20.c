#include<stdio.h>
int main(){
    int i, z=0, w=0, j, a, t;
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    scanf("%d", &t);
    for(i=0; i<a; i++){
        if(x[i]==t){
        for(j=i; j<a; j++){
            x[j]=x[j+1];
            w=1;
        }
        if(w==1){
            break;
        }
        }
    }
    printf("\n");
    for(i=0; i<a-1; i++){
        printf("%d", x[i]);
    }
    return 0;
}