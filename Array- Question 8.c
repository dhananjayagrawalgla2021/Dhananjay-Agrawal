#include<stdio.h>
int main(){
    int i, z=0;
    int x[500];
    int y[40];
    for(i=0; i<500; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<40; i++){
        y[i]=z;
    }
    for(i=0; i<500; i++){
        if(x[i]>60){
            y[x[i]-60]=y[x[i]-60]+1;
        }
    }
    for(i=0; i<40; i++){
        printf("freq. of %d is %d", y[i+60], y[i]);
    }
    return 0;
}