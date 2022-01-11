#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

int main() {
    fastIO

    int query;
    cin >> query;
    while (query--) {
        int n;
        cin >> n;
        vector <int> a;
        a.resize(n);
        for (int &x: a)
            cin >> x;
        sort(a.begin(), a.end());
        cout << a[0] + a[1] << "\n";
    }
}