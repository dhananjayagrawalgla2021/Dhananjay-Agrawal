#include <stdio.h>

int main()
{
    int i, a;
    printf("Enter array size");
    scanf("%d", &a);
    int x[a];
    for(i=0; i<5; i++){
        scanf("%d", & x[i]);
    }
    printf("Array->  ");
    for(i=0; i<5; i++){
        printf("%d\t", x[i]);
    }

    return 0;
}
