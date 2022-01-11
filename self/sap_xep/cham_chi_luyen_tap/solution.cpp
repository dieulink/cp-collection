#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    fastIO

    int n;
    vector < int > a;

    cin >> n;
    a.resize(n);
    for (int &x: a) cin >> x;

    sort(a.begin(), a.end());

    int cnt = 1;
    for (int x: a) if (x >= cnt) cnt++;
    cout << cnt - 1 << endl;
}