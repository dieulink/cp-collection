#include <bits/stdc++.h>

using namespace std;

int n;
vector <pair <int, string>> candidates;

int main() {
    cin >> n;
    candidates.resize(n);
    for (pair <int, string> &candidate: candidates)
        cin >> candidate.first >> candidate.second;

    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (candidates[i].first < candidates[j].first)
                swap(candidates[i], candidates[j]);

    for (pair <int, string> candidate: candidates)
        cout << candidate.first << " " << candidate.second << "\n";
}