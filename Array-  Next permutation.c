#include <stdio.h>
int main()
{
    int a, i, j, k, t;
    printf("Enter size of array");
    scanf("%d", &a);
    int x[a];
    for (i=0; i<a; i++){
        scanf("%d", &x[i]);
    }
    for(j=a-1; j>=0; j--){
        printf("%d", x[j]);
        if(x[j]>x[j-1]){
            break;
        }
    }
    printf("\n%d", x[j-1]);
    for(k=j; k<a-1; k++){
        if(x[j-1]>x[k+1]){
        t=x[j-1];
        x[j-1]=x[k];
        x[k]=t;
        break;
        }
    }
    for(i=0; i<a; i++){
        printf("\t%d", x[i]);
    }
    return 0;
}
