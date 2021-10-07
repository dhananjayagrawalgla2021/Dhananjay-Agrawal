/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d%d",&a,&b);
    c=a/b;
    d=a%b;
    printf("The value of quotient %d", c);
    printf("\nThe value of remainder %d", d);

    return 0;
}
