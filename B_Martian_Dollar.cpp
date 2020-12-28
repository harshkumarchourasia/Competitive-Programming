#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,b;
    cin>>n>>b;
    vector<int> A(n,0);
    for(int i=0;i<n;i++)
        cin>>A[i];
    int ans = b;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int canbuy = b/A[i];
            int more = b%A[i];
            int sell = canbuy * A[j] + more;
            if(sell>ans) ans = sell;
        }
    }
    cout<<ans;
    return 0;
}