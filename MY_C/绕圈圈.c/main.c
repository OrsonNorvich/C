#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

void abc(int k,int n,int N,int a[MAXN][MAXN]){
    int i;
    if(n==0)return ;
    else{
        for(i=1;i<=n;i++)a[N-n+1][i]=k++;
        for(i=N-n+2;i<=n;i++)a[i][N-n+1]=k++;
        for(i=n-1;i>=1;i--)a[n][i]=k++;
        for(i=n;i>=N-n+1;i--)a[i][N-n+1]=k++;
        abc(k,n-1,N,a);
    }

}

int main()
{
    int a[MAXN][MAXN];
    abc(1,3,3,a);
    int b;
    return 0;
}
