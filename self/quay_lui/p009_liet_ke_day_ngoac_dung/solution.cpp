#include <iostream>
using namespace std;

int s[21];
int n;

void back_tracking(int x)
{
    if(x > 2 * n)
    {
        // kiểm tra dãy ngoặc hợp lệ bằng cách gán ngoặc mở bằng
        // 1 ngoặc đóng bằng -1 và cộng dồn, từ trái qua phải, nếu
        // tổng đang cộng bé hơn 0 hoặc tổng các phần tử khác 0 thì
        // đây là dãy ngoặc không hợp lệ
        int sum = 0;
        for(int i = 1; i <= 2 * n; ++i)
        {
            sum += s[i];
            if(sum < 0) return;
        }
        if(sum != 0) return;
        for(int i = 1; i <= 2 * n; ++i)
        {
            if(s[i] == 1) cout << '(';
            else cout << ')';
        }
        cout << '\n';
        return;
    }
    s[x] = 1;
    back_tracking(x + 1);
    s[x] = -1;
    back_tracking(x + 1);
}

int main() {
    cin >> n;
    back_tracking(1);
    return 0;
}
