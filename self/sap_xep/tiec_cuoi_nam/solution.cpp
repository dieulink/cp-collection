#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

vector < char > f[4];

int main() {
    fastIO

    for (int i = 0; i < 3; ++i) {
        string inp;
        cin >> inp;
        for (char x: inp) f[i].push_back(x);
    }

    for (char x: f[1]) f[0].push_back(x);
    sort(f[0].begin(), f[0].end());
    sort(f[2].begin(), f[2].end());
    if (f[0].size() != f[2].size()) cout << "NO\n";
    else {
        int flag = true;
        for (int i = 0; i < f[0].size(); ++i) {
            if (f[0][i] != f[2][i]) {
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
}