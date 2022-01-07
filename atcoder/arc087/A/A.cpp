#include <bits/stdc++.h>

#define fileInput(problemName) freopen ((string(problemName) + ".inp").c_str(), "r", stdin);freopen ((string(problemName) + ".out").c_str(), "w", stdout);
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

const int inf = 1e9 + 7;
const int N = 1e6 + 7;

int n, answer = 0;
map < int, int > db;
vector < int > numbers;

int main() {
    fastIO
    fileInput("A")
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        if (db[x] == 0) numbers.push_back(x);
        db[x]++;
    }
    for (int number: numbers) {
        if (db[number] <  number) answer += db[number];
        else if (db[number] > number) answer += (db[number] - number);
    }
    cout << answer << endl;
}