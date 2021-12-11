#include <stdio.h>
int main()
{
    int a, b=0, i, j=0, nve=0, pve=0, t, s,nn, pp;
    printf("a");
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }for(i=0; i<a; i++){
        if(x[i]<0){
            nve++;
        }
        if(x[i]>0){
            pve++;
        }
    }if(nve<=pve){
        while(j<nve){
            for(i=1; i<a; i++){
                if(x[i]<0){
                    t=x[i];
                    x[i]=x[j];
                    x[j]=t;
                    j++;
                    
                }
                
            }
            
        }
        /*for(i=0; i<a; i++){
            printf("%d", x[i]);
        }*/
        
        for(i=1; i<nve; i=i+2){
            t=x[i];
            x[i]=x[(2*nve)-i-1];
            x[(2*nve)-1-i]=t;
        }
        for(i=0; i<a; i++){
            printf("%d\t", x[i]);
        }
    }
    
    if(pve<nve){
        while(j<pve){
            for(i=1; i<a; i++){
                if(x[i]>0){
                    t=x[i];
                    x[i]=x[j];
                    x[j]=t;
                    j++;
                    
                }
                
            }
            /*for(i=0; i<a; i++){
            printf("%d\t", x[i]);
        }*/
        }
        for(i=1; i<pve; i=i+2){
            t=x[i];
            x[i]=x[(2*pve)-i-1];
            x[(2*pve)-1-i]=t;
        }
        for(i=0; i<a; i++){
            printf("%d\t", x[i]);
        }
    }
    return 0;
}