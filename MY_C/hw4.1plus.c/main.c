#include<stdio.h>
main(){
    int len_a,len_b,i;
    char a[50],b[50];

    gets(a);

    gets(b);
    while(a[len_a]!='\0'){
        len_a++;
    }
    while(b[len_b]!='\0'){
        len_b++;
    }
    for(i=0;i<len_b;i++)
        a[len_a+i]=b[i];
    a[len_a+len_b]='\0';

    puts(a);
}
