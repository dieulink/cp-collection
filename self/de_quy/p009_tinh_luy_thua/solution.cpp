#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int a, n;

long long Pow(int a, int n)
{
    if(n == 0) return 1;
    return (1LL * Pow(a, n - 1) * a) % MOD;
}

int main() 
{
    cin >> a >> n;
    cout << Pow(a, n);
    return 0;
}