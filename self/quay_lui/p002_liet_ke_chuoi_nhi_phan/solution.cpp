#include <stdio.h>

int X[21], n;

using namespace std;

void out()
{
    for( int i = 1; i <= n; i++){
        printf("%d", X[i]);
    }
    printf("\n");
}

void backtrack(int x)
{
    for( int j = 0; j <= 1; j++){
        X[x] = j;
        if( x == n) out();
        else backtrack(x + 1);
    }
}

int main()
{
    scanf("%d", &n);
    backtrack(1);
}