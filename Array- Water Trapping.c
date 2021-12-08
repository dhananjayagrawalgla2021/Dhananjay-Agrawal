#include <stdio.h>
int main()
{
    int a, i=0, j, k,  water=0, lmax=0, rmax=0, max=0, h;
    int x[5]={3, 1, 2, 0, 3};
    while(i>=0&&i<5){
        for(j=0; j<i; j++){
            if(x[j]>lmax){
                lmax=x[j];
            }
        }
        //printf("%d\t", lmax);
        for(k=i; k<5; k++){
            if(x[k]>rmax){
                rmax=x[k];
            }
        }
       // printf("%d", water);
        //printf("%d\n", rmax);
        if(rmax>lmax){
            max=lmax;
        }
        else{
            max=rmax;
        }
        if(x[i]>max){
            max=x[i];
        }
    //printf("max-%d\t", max);
    //printf("%d\n", x[i]);
       water=water+max-x[i];
       // printf("%d\t", water);
        i++;
        lmax=0;
        rmax=0;
       //printf("%d,\t.", h);
    }
    printf("%d", water);
    return 0;
}