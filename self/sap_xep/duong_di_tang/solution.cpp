#include <iostream>
#include <vector>
#include <algorithm>

#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ii pair < int, int >

using namespace std;

struct Edge {
    int u, v, w;
};

int n, m;
vector < Edge > edges;
vector < ii > f;
vector < int > dp, color;

bool cmp(Edge a, Edge b) {
    return (a.w < b.w);
}

int main() {
    fastIO

    freopen ("input.inp", "r", stdin); freopen ("testcases.txt", "a", stdout);

    cin >> n >> m;
    edges.resize(m);
    color.resize(n + 1);
    dp.resize(n + 1);
    for (Edge &x: edges)
        cin >> x.u >> x.v >> x.w;

    sort(edges.begin(), edges.end(), cmp);

    int cnt = 0;
    for (int i = 0; i < m; ++i) {
        Edge x = edges[i];
        if (x.w != cnt) {
            for (int j = 0; j < f.size(); ++j) {
                int u = f[j].first, w = f[j].second;
                color[u] = cnt;
                dp[u] = max(dp[u], w);
            }
            f.clear();
        }
        cnt = x.w;
        if (color[x.u] < x.w and dp[x.v] < dp[x.u] + 1) {
            f.push_back(make_pair(x.v, dp[x.u] + 1));
        }
    }

    if (f.size()) {
        for (int j = 0; j < f.size(); ++j) {
            int u = f[j].first, w = f[j].second;
            color[u] = cnt;
            dp[u] = max(dp[u], w);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans = max(ans, dp[i]);
    cout << ans << "\n";
}