#include <stdio.h>
int main()
{
    int a=1, b=0, n;
    scanf("%d", &n);
    while(a<=n){
        if(a%2==0){
        b=b+a;}
        a++;
    }
    printf("%d", b);
    return 0;
}
