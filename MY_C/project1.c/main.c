#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float n, e = 1.0f;

    printf("Enter a small floating point number: ");
    scanf("%f", &n);

    int a = 1, b = 1;
    for (;;) {

        b *= a;

        if (1.0f / b < n) {
            printf("Term %d (1/%d!): %f which is lower than the threshold: %f\n", a, a, 1.0f / b, n);
            break;
        }

        e += (1.0f / b);
        printf("Term %d (1/%d!): %f, e is currently: %f\n", a, a, 1.0f / b, e);
        a++;
    }

    printf("\nAdded %d a, result is: %f", a-1, e);
    return 0;
}
