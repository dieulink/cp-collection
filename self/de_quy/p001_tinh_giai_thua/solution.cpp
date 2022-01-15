#include <bits/stdc++.h>

using namespace std;

long long giai_thua(int n)
{
    if(n == 0 || n == 1) return 1;
    else return (giai_thua(n - 1) * n) % (1000000007);
}

int main()
{
    int n;
    cin >> n;
    cout << giai_thua(n);
}