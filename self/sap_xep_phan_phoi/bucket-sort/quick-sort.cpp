#include <bits/stdc++.h>

using namespace std;

void QuickSort(vector <double> &f, int l, int r) {
    int i = l, j = r, pivot = (i + j) / 2;
    while (i <= j) {
        while (f[i] < f[pivot])
            i++;
        while (f[j] > f[pivot])
            j--;

        if (i <= j) {
            swap(f[i], f[j]);
            i++;
            j--;
        }

        if (l <= j)
            QuickSort(f, l, j);
        if (i <= r)
            QuickSort(f, i, r);
    }
}

int main() {
    freopen ("input.txt", "r", stdin); freopen ("output-qs.txt", "w", stdout);

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
        QuickSort(a, 0, a.size() - 1);
        int index = lower_bound(a.begin(), a.end(), k) - a.begin();
        cout << k << " ~ " << a[index] << "\n";
    }
    t = clock() - t;
    cout << ((float)t) / CLOCKS_PER_SEC << "\n";
}