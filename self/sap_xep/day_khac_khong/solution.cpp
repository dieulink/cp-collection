#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

vector < int > calculate(vector < int > f) {
    vector < int > res;
    int sum = 0;
    for (int x: f) sum += x;
    if (sum == 0) return (res);
    sort(f.begin(), f.end());
    if (sum > 0) reverse(f.begin(), f.end());
    return (res = f);
}

int main() {
    fastIO
    
    int query;
    cin >> query;
    
    while (query--) {
        int n;
        vector < int > a;
        cin >> n;
        a.resize(n);
        for (int &x: a) cin >> x;
        vector < int > ans = calculate(a);
        if (ans.size() == 0) cout << "NO\n";
        else {
            cout << "YES\n";
            for (int x: ans) cout << x << " ";
            cout << endl;
        }
    }
}