#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int N = 200000;

int main() {
	fastIO

    freopen ("input.inp", "r", stdin); freopen ("testcases.txt", "a", stdout);

	int n;
	int x[N], w[N];
	vector< pair < int, int > > v;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> w[i];
		v.push_back(make_pair(x[i] + w[i], x[i] - w[i]));
    }

    sort(v.begin(), v.end());
    int res = 1, s, e;
    tie(e,s) = v[0];
    for (int i = 1; i < v.size(); ++i) {
        int l, u;
        tie(u,l) = v[i];
        if (e <= l) {
            res++;
            e = u;
        }
    }
    cout << res << endl;
    return 0;
}
