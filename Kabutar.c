#include <stdio.h>
int main()
{
    int n, num=1, a=0;
    int i, j, h, z, nn, w=0, cnt=0;
    scanf("%d", &n);
    int x[n][n];
    int y[n+1][n+1];
    int arr[n*n];
    z=4;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            x[i][j]=num;
            num++;
        }
    }
    nn=n*n;
    h=x[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            arr[a]=x[i][j];
            a++;
        }
    }
    i=0; j=0;
    while(arr[w]<arr[nn-1]){
        cnt=0;
        while(cnt<z){
            y[i][j]=arr[w];
            j++; w++; cnt++;
        }
        z--;
        cnt=0;
        while(cnt<z){
            y[i][j]=arr[w];
            i++; w++; cnt++;
        }
        cnt=0;
        while(cnt<z){
            y[i][j]=arr[w];
            j--; w++; cnt++;
        }
        z--;
        while(cnt<z){
            y[i][j]=arr[w];
            i--; w++; cnt++;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("\t%d", y[i][j]);
        }
        printf("\n");
    }
    return 0;
}
