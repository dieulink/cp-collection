#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int main() {
    fastIO
    fileInput("SMPAIR")

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