#include <stdio.h>
int main(void) {
int i;
int a[5]={1,2,3,4,5};
for(i=5;i>=2;i--)
a[i-1]=a[i-2];
for(i=0;i<5;i++)
printf("%d ",a[i]);
return 0;}
