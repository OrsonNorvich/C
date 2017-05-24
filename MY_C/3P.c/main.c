#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define suits 4
#define ranks 13

int main(void)
{
    bool card[suits][ranks]={false};
    int suit, rank, num;
    const char card_rank[]={'2','3','4','5','6','7','8','9','10','J','Q','K','A'};
    const char card_suit[4][20]={{"ºìÌÒ"},{"ºÚÌÒ"},{"·½¿é"},{"Ã·»¨"}};

    srand((unsigned) time(NULL));

    num=17;
    while (num>0){
        suit = rand() % suits;
        rank = rand() % ranks;
        //if (!card[suit][rand]){
           //card[suit][rand]=true;
            num--;
            printf("  %s%c\n", card_suit[suit], card_rank[rank]);
        //}
    }
    printf("\n");

    return 0;
}
