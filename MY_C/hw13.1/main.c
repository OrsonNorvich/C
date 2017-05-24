#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxn 50

void getword(void);
void exchange(void);
void str_cmp(void);

char smallest[maxn+1];
char largest[maxn+1];
char Getsword[maxn+1];

void getword(void)
{
    printf("Enter a word: ");
    scanf("%20s", &Getsword);
}

void exchange(void)
{
    getword();
    strcpy(smallest, Getsword);
    strcpy(largest, Getsword);
}

void str_cmp(void)
{
    getword();
    if (strcmp(Getsword, smallest)<0)
        strcpy(smallest, Getsword);
    else if (strcmp(Getsword, largest)>0)
        strcpy(largest, Getsword);
}
int main()
{
    printf("While the length if the word is four, the project will be exit.\n");
    exchange();
    while (strlen(Getsword)!=4)
        str_cmp();
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s", largest);
    return 0;
}
