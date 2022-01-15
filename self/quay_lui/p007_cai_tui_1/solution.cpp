#include <bits/stdc++.h>

using namespace std;

int ans = 0;
int n, m;
int w[21], v[21];

void back_track(int x, int weight, int value)
{
    //nếu trọng lượng các vật đã lấy lớn hơn trọng lượng cái túi chứa được thì không duyệt nữa
    if(weight > m) return;
    if(x > n)
    {
        ans = max(ans, value);
        return;
    }
    back_track(x + 1, weight + w[x], value + v[x]); //chọn món x
    back_track(x + 1, weight, value); //không chọn
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> w[i] >> v[i];

    back_track(1, 0, 0);
    cout << ans;
    return 0;
}