#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, k;
vector < int > a, f;

int main() {
    fastIO
    fileInput("B")
    cin >> n >> k;
    a.resize(n + 1, 0);
    f.resize(n + 1, inf);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    f[1] = 0;
    for (int i = 2; i <= n; ++i) {
        for (int j = i - 1; j >= max(1, i - k); --j) {
            f[i] = min(f[i], f[j] + abs(a[i] - a[j]));
        }
    }
    cout << f[n] << endl;
}
