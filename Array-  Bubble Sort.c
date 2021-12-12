#include <stdio.h>
int main()
{
    int i, j, t, n=8;
    int x[8]={12, 5, 17, 87, 109, 43, 44, 47};
    for(i=0; i<8; i++){
        for(j=0; j<8-i; j++){
            if(x[j]>x[j+1]){
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
       
    }
    for(i=0; i<8; i++){
        printf("%d\t", x[i]);
    }
}