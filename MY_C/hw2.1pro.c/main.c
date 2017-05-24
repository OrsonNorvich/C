#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch=getchar();
    if ('a' <= ch && ch <= 'z')
        ch = ch - 'a' + 'A';
    else if ('A' <= ch && ch <= 'Z')
        ch = ch - 'A' + 'a';

    printf("%c\n", ch);

    return 0;
}
