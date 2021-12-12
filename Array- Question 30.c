#include <stdio.h>
int main()
{
    int i, j, a, b, n, m;
    printf("Enter total number of ");
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    printf("range of roll number");
    scanf("%d%d", &m, &n);
    if(n>m){
        for(i=m-1; i<n; i++){
            printf("%d", x[i]);
        }
    }
    return 0;
}
