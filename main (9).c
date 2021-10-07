/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*/

#include <stdio.h>

int main()
{
    int a,b,s;
    
    scanf("%d%d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d \n%d",a,b);

    return 0;
}
