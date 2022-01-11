#include <bits/stdc++.h>

using namespace std;

struct Candidate {
    string id;
    int point, submit;

    void show() {
        cout << id << " " << point << " " << submit << "\n";
    }
};

int n;
Candidate target;
vector < Candidate > candidates;

void quick_sort(vector < Candidate > &f, int l, int r) {
    int i = l, j = r, pivot = (l + r) / 2;

    while (i <= j) {
        while (f[i].point > f[pivot].point or f[i].point == f[pivot].point and f[i].submit < f[pivot].submit) i++;
        while (f[j].point < f[pivot].point or f[j].point == f[pivot].point and f[j].submit > f[pivot].submit) j--;

        if (i <= j) {
            swap(f[i], f[j]);
            i++;
            j--;
        }

        if (l <= j) quick_sort(f, l, j);
        if (i <= r) quick_sort(f, i, r);
    }
}

bool cmp(Candidate x, Candidate y) {
    return (x.point > y.point or x.point == y.point and x.submit < y.submit);
}

int main() {
    freopen ("input.inp", "r", stdin); freopen ("testcases.txt", "a", stdout);

    cin >> n;
    cin >> target.id;
    candidates.resize(n);
    for (Candidate &x: candidates) cin >> x.id >> x.point >> x.submit;
    
    //quick_sort(candidates, 0, n - 1);

    sort(candidates.begin(), candidates.end(), cmp);

    bool res = false;
    for (int i = 0; i < 6; ++i) if (candidates[i].id == target.id) res = true;
    if (res) cout << "YES\n";
    else cout << "NO\n";
}