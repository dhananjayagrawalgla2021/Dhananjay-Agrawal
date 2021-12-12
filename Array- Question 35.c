#include <stdio.h>
int main(void) {
int i;
int ar[7]={12, 67, 45, 34, 87, 90, 23};
for(i=7; i>=3;i--)
ar[i-1]=ar[i];

for(i=0;i<7;i++)
printf("%d ",ar[i]);
return 0;}
