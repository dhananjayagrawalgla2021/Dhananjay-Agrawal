#include <stdio.h>
int main()
{
    int a, b=0, i, j;
    printf("a");
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<a; i++){
        for(j=i+1; i<a; i++){
            if(x[i]>x[j-1]){
                b++;
            }
        }
    }
    printf("\n%d", b);
    return 0;
}
