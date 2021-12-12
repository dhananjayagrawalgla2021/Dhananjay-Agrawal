#include<stdio.h>
int main(){
    int i, z=0, w=0;
    int x[10];
    int y[10];
    for(i=0; i<10; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<10; i++){
        scanf("%d", &y[i]);
    }
    for(i=0; i<10; i++){
        z=z+x[i];
    }
    for(i=0; i<10; i++){
        w=w+y[i];
    }
    if(z>w){
        printf("x");
    }
    if(w>z){
        printf("y");
    }
    if(w==z){
        printf("tie");
    }
    return 0;
}