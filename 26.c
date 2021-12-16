#include <stdio.h>
int main()
{
    int a, b, c, d=0, i, j, f, rev=0, o, k, m;
    scanf("%d", &a);
    int x[a];
    int y[6]={0, 1, 153, 370, 371, 407};
    int z[1000];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<a; i++){
        c=x[i];
        for(j=2; j<=c/2; j++){
            if(x[i]%j==0){
                d=1;
                break;
            }
        }
        if(d!=1){
            for(f=0; f<6; f++){
                if(c>y[f]){
                    continue;
                }
                else{
                    x[i]=y[f];
                    
                }
            }
        }
        if(d==1){
            for(k=c;;k++){
                m=k;
                while(m>0){
                    rev=(rev*10)+(m%10);
                    m/=10;
                }
                if(rev==k){
                    x[i]=k;
                    break;
                }
            }
            
        }
    }
    for(i=0; i<a; i++){
        printf("%d\n", x[i]);
    }
    
    return 0;
}