#include <iostream>
using namespace std;

int n;
int a[105];
bool mark[105];

int Count(int i)
{
    if(i > n) return 0;
    if(!mark[a[i]]) 
    {
        mark[a[i]] = true;
        return Count(i + 1) + 1;
    }
    else return Count(i + 1);
}

int main() 
{
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    cout << Count(1);
    return 0;
}