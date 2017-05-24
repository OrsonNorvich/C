#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    scanf("%d", &grade);

    switch (grade){
    case 4: printf("Excellent"); break;
    case 3: printf("Good"); break;
    case 2: printf("Average"); break;
    }
    return 0;
}
