#include <stdio.h>

int main()
{
    int a, b, c, t, i, j;
    printf("Enter array size");
    scanf("%d", &a);
    int x[a];
    for(i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    int min=0;
    int mid=0;
    int max=a-1;
    while(mid<=max){
        switch(x[mid]){
            case 0:
            
                t=x[min];
                x[min]=x[mid];
                x[mid]=t;
                min++;
                mid++;
                break;
            
            case 1:
                mid++;
                break;
            case 2:
                t=x[max];
                x[max]=x[mid];
                x[mid]=t;
                max--;
                break;
            
        }
    }
    for(i=0; i<a; i++){
        printf("%d", x[i]);
    }
    return 0;
}
