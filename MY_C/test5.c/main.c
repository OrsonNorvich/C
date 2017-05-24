#include <stdio.h>
#include <stdlib.h>

void input_matrix(int **pmatrix, int n);
void output_matrix(int **pmatrix, int n);
void destroy(int **pmatrix, int n);
void sum_even_odd(int **pmatrix, int *psum_even, int *psum_odd, int n);

int main()
{
    int i, n;
    int **pa;
    int sum_even = 0, sum_odd = 0;

    scanf("%d", &n);
    if(n<=1)
    {
        printf("Cannot create a square matrix!\n");
        return 1;
    }
    pa = (int **)malloc(n * sizeof(int *));

    if (pa == NULL)
    {
        printf("Not Enough Memory!\n");
        return 2;
    }

    for (i = 0; i < n; i++)
    {
        pa[i] = (int *)malloc(n * sizeof(int));
        if (pa[i]==NULL)
        {
            printf("Not Enough Memory!\n");
            return 2;
        }
    }
    input_matrix(pa, n);
    sum_even_odd(pa, &sum_even, &sum_odd, n);
    printf("%d,%d",sum_even, sum_odd);

    destroy(pa, n);
    return 0;
}

void input_matrix(int **pmatrix, int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &pmatrix[i][j]);
        }
    }
}

void output_matrix(int **pmatrix, int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", pmatrix[i][j]);
        }
    }
}

void destroy(int **pmatrix, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        free(pmatrix[i]);
    }
    free(pmatrix);
    pmatrix = NULL;
}

void sum_even_odd(int **pmatrix, int *psum_even, int *psum_odd, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (pmatrix[i][i]%2==0)
            *psum_even+=pmatrix[i][i];
        if (pmatrix[i][n-i-1]%2!=0)
            *psum_odd+=pmatrix[i][n-i-1];
    }
}
