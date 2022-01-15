#include <iostream>
using namespace std;

bool used[11];
int s[11];
int n, k;

void back_track(int x)
{
    if(x > k)
    {
        for(int i = 1; i <= k; ++i)
        {
            cout << s[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; ++i) //tim nghiem
    {
        if(!used[i]) //neu i chua duoc su dung
        {
            s[x] = i; //gan i la nghiem
            used[i] = true;
            back_track(x + 1); //cau hinh tiep theo
            used[i] = false;
        }   
    }
}

int main() {
    cin >> n >> k;
    back_track(1);
    return 0;
}