#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    fastIO

    int n, d;
    vector <int> a;

    cin >> n >> d;
    a.resize(n);
    for (int &x: a) cin >> x;

    sort(a.begin(), a.end());
    int cnt = 0;
    for (int i = 0; i < n - 1;)
        if (a[i] >= a[i + 1] - d)
            cnt++, i += 2;
        else
            i++;

    cout << cnt << "\n";
}