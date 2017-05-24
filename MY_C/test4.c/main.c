#include <stdio.h>
#include <stdlib.h>
#define N 5

struct student
{
    long num;;
    char name[20];
    float score;
};

int greater(const void *p, const void *q);
int lessthan(const void *p, const void *q);
void input_student(struct student a[], int n);
void output_student(struct student a[], int n);

int main()
{
    struct student CIE_CS[N];
    int (*fun)(const void *p, const void *q);
    input_student(CIE_CS, N);
    printf("Sort results with descending order:\n");
    fun = greater;
    qsort(CIE_CS, N, sizeof(struct student), fun);
    output_student(CIE_CS, N);
    printf("Sort results with ascending order:\n");
    fun = lessthan;
    qsort(CIE_CS, N, sizeof(struct student), fun);
    output_student(CIE_CS, N);
    return 0;
}

int greater(const void *p, const void *q)
{
    const struct student *x=p;
    const struct student *y=q;
    return (x->score>y->score);
}

int lessthan(const void *p, const void *q)
{
    const struct student *x=p;
    const struct student *y=q;
    return (x->score<y->score);
}

void input_student(struct student a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%ld", &a[i].num);
        scanf("%s", &a[i].name);
        scanf("%f", &a[i].score);
    }
}

void output_student(struct student a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%ld ", a[i].num);
        printf("%s ", a[i].name);
        printf("%f", a[i].score);
        printf("\n");
    }
}
