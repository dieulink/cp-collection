#include <bits/stdc++.h>

using namespace std;

int n;
int a[105];

int Min(int i)
{
    if(i == n) return a[i];
    return min(a[i], Min(i + 1));
}

int Max(int i)
{
    if(i == n) return a[i];
    return max(a[i], Max(i + 1));
}


int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    cout << Min(1) << '\n';
    cout << Max(1);
}