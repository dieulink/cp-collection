#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
ll pre[10000];
vector <pair<ll,ll>> v;
stack<pair<int,int>> st;
int main()
{
    IOS;

    ll n,s;
    cin>>n>>s;
    map <int,int> mp1;
    map <int,int> mp2;

    for(ll i=0;i<n;i++)
    {
        char ch;
        ll p,q;
        cin>>ch>>p>>q;
        if(ch=='S')
        {
            mp1[p]+=q;
        }
        else
        {
            mp2[-p]+=q;
        }
    }
    ll count=0;
    for(auto it : mp1)
    {
        st.push(make_pair(it.first,it.second));
        ++count;
        if(count==s)
        break;
    }
    while(!st.empty())
    {
        cout<<"S"<<" "<<st.top().first<<" "<<st.top().second<<endl;
        st.pop();
    }
    count=0;
    for(auto it : mp2)
    {
        st.push(make_pair(it.first,it.second));
        ++count;
        cout<<"B"<<" "<<-st.top().first<<" "<<st.top().second<<endl;
        if(count==s)
        break;
    }
    //soln 2 for a2oj
    return 0;
}