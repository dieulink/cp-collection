#include <bits/stdc++.h> // Khai báo luôn các thư viện cho ngắn gọn.
using namespace std;

long long reverse_N = 0;

void reverse_number(long long N)
{
    if (N == 0)
        return;

    reverse_N = reverse_N * 10 + N % 10;

    reverse_number(N / 10);
}

int main()
{
    long long N;
    cin >> N;

    reverse_number(N);

    cout << reverse_N;
}
