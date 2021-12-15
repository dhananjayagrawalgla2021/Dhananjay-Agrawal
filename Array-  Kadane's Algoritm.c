#include <stdio.h>
int main ()
{
  int a, b, n = 0, i, j, max=0;
  scanf ("%d", &a);
  int x[a];
  for(i=0; i<a; i++){
      scanf("%d",&x[i]);
    }
  for(i=0;i<a;i++)
    {
      n=n+x[i];
      if(n<0)
	{
	  n=0;
	}
	if(n>max){
	    max=n;
	}

	
    }
    printf("%d", max);
  return 0;
}
