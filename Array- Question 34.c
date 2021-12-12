#include <stdio.h>
int main(void) {
int i;
int ar[7]={12, 67, 45, 34, 87, 90, 23};
for(i=2; i<=5;i++)
ar[i]=ar[i+1];
for(i=0;i<7;i++)
printf("%d ",ar[i]);
return 0;}
