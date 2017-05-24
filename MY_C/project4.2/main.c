#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[60];
    int i=0;
    gets(ch);
    while (ch[i]!='\0'){
        if (ch[i]>='a'&&ch[i]<='z'){
            ch[i]=((ch[i]-'a')+2)%26+'a';
        }
        else if (ch[i]>='A'&&ch[i]<='Z'){
            ch[i]=((ch[i]-'A')+2)%26+'A';
        }
        i++;
    }
    puts(ch);
    return 0;
}
