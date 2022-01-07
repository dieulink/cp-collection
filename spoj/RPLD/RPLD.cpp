#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int N = 1e4 + 7;

int query, n, m;

bool Calculate() {
    map < int, bool > db[N];
    bool result = true;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int u, v;
        cin >> u >> v;
        if (db[u][v] == false) db[u][v] = true;
        else result = false;
    }
    return (result);
}

int main() {
    fastIO
    fileInput("RPLD")

    cin >> query;
    for (int qq = 1; qq <= query; ++qq) {
        cout << "Scenario #" << qq << ": ";
        if (Calculate()) cout << "possible\n";
        else cout << "impossible\n";
    }
}