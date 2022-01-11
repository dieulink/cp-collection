#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

#define ll long long
#define ii pair <ll, ll>

using namespace std;

struct str {
    ll left;
    ll right;
    int index;
};

vector <str> g;
vector <ii> f, x;
set <ii> s;
vector <int> ans;
int n, m;

bool cmp(str a, str b) {
    return (a.right < b.right);
}

int main() {
    cin >> n >> m;

    f.resize(n + 1);
    g.resize(n + 1);
    x.resize(m + 1);
    ans.resize(n + 1);

    for (int i = 1; i <= n; ++i) {
        ll c, d;
        cin >> c >> d;
        f[i] = make_pair(c, d);
    }

    for (int i = 1; i < n; ++i) {
        g[i] = {
            f[i + 1].first - f[i].second,
            f[i + 1].second - f[i].first,
            i
        };
    }

    for (int i = 1; i <= m; ++i) {
        ll c;
        cin >> c;
        x[i] = make_pair(c, i);
    }

    sort(g.begin() + 1, g.end() - 1, cmp);
    sort(x.begin() + 1, x.end());

    int pivot = 1;
    for (int i = 1; i < n; ++i) {
        while (pivot <= m and x[pivot].first <= g[i].right)
            s.insert(x[pivot++]);
        
        set <ii> ::iterator it = s.lower_bound(make_pair(g[i].left, 0));

        if (it == s.end()) {
            cout << "No\n";
            return 0;
        }

        ans[g[i].index] = (it->second);
        s.erase(it);
    }
    cout << "Yes\n";
    for (int i = 1; i < n; ++i)
        cout << ans[i] << " ";
    cout << "\n";
}