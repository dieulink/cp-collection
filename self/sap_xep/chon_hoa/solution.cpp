#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const long long inf = 1e15 + 7;

int main() {
    fastIO

    int query;
    cin >> query;
    while (query--) {
        int n;
        cin >> n;
        vector <long long> a;
        a.resize(n);
        for (long long &x: a)
            cin >> x;
        sort(a.begin(), a.end());
        long long ans = inf;
        for (int i = 0; i < n - 1; ++i)
            ans = min(ans, a[i + 1] - a[i]);
        cout << ans << "\n";
    }
}