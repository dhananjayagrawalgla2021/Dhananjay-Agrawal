#include <stdio.h>
int main()
{
    int a, b, c, i, j;
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    scanf("%d", &c);
    for(i=0; i<a; i++){
        for(j=i; j<a; j++){
            if((x[i]+x[j])==c){
                printf("%d\t%d\n", x[i], x[j]);
            }
        }
    }
    return 0;
}