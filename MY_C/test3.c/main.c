#include <stdio.h>
#include <stdlib.h>
#define N 5

void input_vector(double a[], int n);
double inner_product(double a[], double b[], int n);

int main()
{
    double a[N], b[N];
    input_vector(a, N);
    input_vector(b, N);

    printf("%1f\n", inner_product(a, b, N));
    return 0;
}

void input_vector(double a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
}

double inner_product(double a[], double b[], int n)
{
    int i;
    double s;
    for (i = 0; i < n; i++)
    {
        s+=(a[i]*b[i]);
    }
    return s;
}
