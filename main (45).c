#include <stdio.h>

int main()
{
    int t, a, b, c, d, e, f, g, h, i, j, k, l, m, n;
    scanf("%d", &t);
    a=t/2000;
    b=t%2000;
    printf("AMOUNT ENTERED =%d\n", t);
    printf("Number of 2000 rupees note =%d\n", a);
    c=b/500;
    d=b%500;
    printf("Number of 500 rupees note =%d\n", c);
    e=d/200;
    f=d%200; 
    printf("Number of 200 rupees note =%d\n", e);  
    g=f/100;
    h=f%100; 
    printf("Number of 100 rupees note =%d\n", g); 
    i=h/50;
    j=h%50; 
    printf("Number of 50 rupees note =%d\n", i);     
    k=j/20;
    l=j%20; 
    printf("Number of 20 rupees note =%d\n", k); 
    m=l/10;
    n=l%10; 
    printf("Number of 10 rupees note =%d\n", m);  
    
    return 0;
}
