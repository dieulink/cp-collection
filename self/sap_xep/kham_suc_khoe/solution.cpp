#include <iostream>

using namespace std;

int main() {
    const int N = 1e4 + 7;

    int n;
    int a[N];

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << "\n";
}