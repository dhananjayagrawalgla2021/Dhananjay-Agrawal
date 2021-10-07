/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, yy=0, area=0;
    
    scanf("%f%f%f", &a,&b,&c);
    yy=(a+b+c)/2;
    area=sqrt((yy)*(yy-a)*(yy-b)*(yy-c));
    printf("%f",area);

    return 0;
}
