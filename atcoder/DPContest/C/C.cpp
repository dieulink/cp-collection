#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e5 + 7;

int n;
vector < int > a, b, c;
int f[N][4];

int main() {
    fastIO
    fileInput("C")
    cin >> n;
    a.resize(n + 1, 0);
    b.resize(n + 1, 0);
    c.resize(n + 1, 0);
    for (int i = 1; i <= n; ++i) cin >> a[i] >> b[i] >> c[i];

    f[1][1] = a[1];
    f[1][2] = b[1];
    f[1][3] = c[1];
    for (int i = 2; i <= n; ++i) {
        f[i][1] = a[i] + max(f[i - 1][2], f[i - 1][3]);
        f[i][2] = b[i] + max(f[i - 1][1], f[i - 1][3]);
        f[i][3] = c[i] + max(f[i - 1][1], f[i - 1][2]);
    }
    cout << max(f[n][1], max(f[n][2], f[n][3])) << endl;
}
