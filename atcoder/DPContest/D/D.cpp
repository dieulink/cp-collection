#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e3 + 7;

int n, m;
vector < int > a, b;
int f[N][N];

int main() {
    fastIO
    fileInput("D")
    cin >> n >> m;
    a.resize(n + 1, 0);
    b.resize(n + 1, 0);
    for (int i = 1; i <= n; ++i) cin >> a[i] >> b[i];
    f[1]
}
