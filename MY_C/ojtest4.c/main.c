#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char ch[20];
    while(ch[i]=getchar()!='\n')
    {
        if(ch[i]=getchar()>=65&&ch[i]getchar()<=90)
        {
            ch[i]+=32;
        }
    }
    return 0;
}
