/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*/

#include <stdio.h>
int main()
{
    float a, b, h, area=0;
    
    scanf("%f%f%f", &a,&b,&h);
    area=0.5*(a+b)*h;
    printf("%f",area);

    return 0;
}
