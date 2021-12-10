#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("a");
    scanf("%d", &a);
    printf("b");
    scanf("%d", &b);
    int x[a+1];
    int y[b+1];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<b; i++){
        scanf("%d", &y[i]);
    }
    i=0; j=0;
    while(i<a||j<b){
        if(x[i]==y[j]){
            printf("%d\t", x[i]);
            i++; j++;
        }
        if(x[i]<y[j]){
            i++;
        }
        if(x[i]>y[j]){
            j++;
        }
    }
    return 0;
}
