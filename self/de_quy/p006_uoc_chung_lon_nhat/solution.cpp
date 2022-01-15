#include <bits/stdc++.h>
using namespace std;

int a, b;

int bcnn(int a, int b)
{
    if(b == 0) return a;
    return bcnn(b, a % b);
}

int main() {
    cin >> a >> b;
    cout << __gcd(a, b);
    return 0;
}