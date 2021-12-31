#include <stdio.h>
int main()
{
    int a, b, c, d, i, j, k;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int x[a][b];
    int y[b][c];
    int z[a][c];
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            scanf("%d", &x[i][j]);
        }
    }
    for(i=0; i<b; i++){
        for(j=0; j<c; j++){
            scanf("%d", &y[i][j]);
        }
    }
    for(i=0; i<a; i++){
        for(j=0; j<c; j++){
            z[i][j]=0;
        }
    }
    
    for(i=0; i<a; i++){
        for(j=0; j<c; j++){
            for(k=0; k<b; k++){
                z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
            }
        }
    }
    
    for(i=0; i<a; i++){
        for(j=0; j<c; j++){
            printf("%d\t", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
