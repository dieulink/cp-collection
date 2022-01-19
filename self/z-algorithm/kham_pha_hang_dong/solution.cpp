#include <bits/stdc++.h>

using namespace std;

void Zfunction(string s, vector <int> &z, vector <int> &f) {
    int n = s.size();
    int L = 0, R = 0;
    z.resize(n);
    f.resize(n + 1);

    for (int i = 1; i < n; i++) {
        if (i > R) {
            L = R = i;

            while (R < n && s[R-L] == s[R]) {
                R++;
                f[R-L]++;
            }
            z[i] = R-L;
            R--;
        }
        else {
            if (z[i-L] < R-i+1)
                z[i] = z[i-L];
            else {
                L = i;
                while (R < n && s[R-L] == s[R]) {
                    R++;
                    f[R-L]++;
                }
                z[i] = R-L;
                R--;
            }
        }
    }
}

int main() {
    freopen ("input.txt", "r", stdin); freopen ("testcases.txt", "a", stdout);

    string s;
    vector <int> z, f;

    cin >> s;
    Zfunction(s, z, f);

    int len = 0;
    for (int i = s.size() - 1; i >= 0; i--)
        if (z[i] == s.size() - i)
            if (f[z[i]] > 1)
                len = max(len, z[i]);

    if (len == 0)
        cout << "Just a legend";
    else
        for (int i = 0; i < len; i++)
            cout << s[i];
    cout << "\n";

    return 0;
}