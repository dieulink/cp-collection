#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n;
vector < int > a, f;

int main() {
    fastIO
    fileInput("A")
    cin >> n;
    a.resize(n + 1);
    f.resize(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    f[1] = 0;
    f[2] = abs(a[2] - a[1]);
    for (int i = 3; i <= n; ++i)
        f[i] = min(f[i - 1] + abs(a[i] - a[i - 1]), f[i - 2] + abs(a[i] - a[i - 2]));
    cout << f[n] << endl;
}
