#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll helper(ll arr[], ll n, ll x)
{
    
    ll res = 0;
    for(ll i=n/2;i<n;i++)
    {
        if(x-arr[i]>=0)
        {
            res+=x-arr[i];
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll mi = arr[n/2];
    ll ma = arr[n-1]+k;
    while(mi<=ma)
    {
        ll mid = (mi+ma)/2;
        ll x = helper(arr,n,mid);
        ll y = helper(arr,n,mid+1);
        //cout<<"mi "<<mi<<"ma "<<ma<<"mid "<<mid<<"x "<<x<<'\n';
        if(x<=k and y>k)
        {
            cout<<mid;
            break;
        }
        else if(x>k)
        {
            ma = mid-1;
        }
        else if(x<k){
            mi = mid+1;
        }

    }
    return 0;
}