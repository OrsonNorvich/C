#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sin(double x)
{
    int i=1, k=2 ;
    float sum=1, sinx=x, j=x,l=1;
    for (;;)
    {
        i=i*(-1);
        j*=x*x;
        l=l*k++;
        l*=k++;
        sum=(float)i*(float)j/(float)l;
        if (fabs(sum)>=10e-6)
        {
            sinx+=sum;
        }
        else
        {
            break;
        }
    }
    return sinx;
}
int main()
{
    double x;
    scanf("%lf", &x);
    printf("%f\n", sin(x));
    return 0;
}
