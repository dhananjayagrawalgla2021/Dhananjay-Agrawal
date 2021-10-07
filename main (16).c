
#include <stdio.h>
int main () 
{
int a,b,ad,sub,mul,divi;

scanf ("%d%d", &a,&b);

ad=a+b;
sub=a-b;
mul=a*b;
divi=a/b;

printf ("arithmetic operation on a and b are\n addition %d\n minus %d\n multiplication %d\n division %d\n", ad, sub, mul, divi);
return 0;
}
