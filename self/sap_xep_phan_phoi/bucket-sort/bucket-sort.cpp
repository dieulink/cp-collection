#include <bits/stdc++.h>

using namespace std;

vector <double> BucketSort(vector <double> f, int n) {
    vector <vector <double>> g;
    vector <double> result;

    g.resize(n);
    result.resize(n);
    for (double x: f) {
        int index = n * x;
        g[index].push_back(x);
    }
    for (int i = 0; i < n; ++i)
        sort(g[i].begin(), g[i].end());
    int index = 0;
    for (int i = 0; i < n; ++i)
        for (double y: g[i])
            result[index++] = y;
    
    return (result);
}

int main() {
    freopen ("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

    clock_t t;
    t = clock();

    int query;
    cin >> query;
    while (query--) {
        int n;
        double k;
        vector <double> a;

        cin >> n >> k;
        a.resize(n);
        for (double &x: a)
            cin >> x;
        vector <double> result = BucketSort(a, n);
        int index = lower_bound(result.begin(), result.end(), k) - result.begin();
        cout << k << " ~ "<< result[index] << "\n";
    }

    t = clock() - t;
    cout << ((float)t) / CLOCKS_PER_SEC << "\n";
}