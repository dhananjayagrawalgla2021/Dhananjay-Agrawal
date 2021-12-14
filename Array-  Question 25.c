#include <stdio.h>
int main()
{
    int a, b, i, j;
    scanf("%d", &a);
    int x[a];
    int y[a];
    int z[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
        y[i]=1; z[i]=0;
    }
    for(i=0; i<a; i++){
        if(z[i]==0){
            for(j=i+1; j<a; j++){
                if(x[i]==x[j]){
                    z[i]=1; z[j]=2;
                    y[i]=y[i]+1;
                }
            }
        }
        else
        continue;
    }
    for(i=0; i<a; i++){
        printf("%d %d\n", y[i], z[i]);
    }
    printf("\n");
    for(i=0; i<a; i++){
        if(z[i]==1 || z[i]==0)
        {
            printf("E= %d F= %d\n", x[i], y[i]);
        }
    }
    return 0;
}
