#include <bits/stdc++.h>

using namespace std;

int f(int n)
{
    if(n == 1 || n == 2) return 1;
    else return f(n - 2) + f(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}