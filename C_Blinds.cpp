#include <bits/stdc++.h>
using namespace std;
int area(vector<int> &a, int l)
{
    int ans = 0;
    for(auto x:a)   ans+=(x/l);
    return ans*l;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, l;
    cin>>n>>l;
    vector<int> a;
    int temp;
    for(int i = 0;i < n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }

    int ans = 0;
    for(int i=l;i<=100;i++)
    {
        ans = max(ans,area(a,i));
    }
    cout<<ans;

    return 0;
}