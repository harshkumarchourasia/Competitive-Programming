#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,d,e;
    cin>>n>>d>>e;
    int ans = n;
    for(int i=0;i*5*e<=n;i++)
    {
        ans = min(ans,(n-i*5*e)%d);
    } 
    cout<<ans;
    return 0;
}
