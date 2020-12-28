#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    set<ll> vertices;
    map<ll,bool> in;
    ll temp;
    for(ll i = 0;i<n;i++)
    {
        cin>>temp;
        vertices.insert(temp);
        in[temp] = true;
    } 
    for(auto v:vertices)
    {
        if(vertices.count(2*v)) in[2*v] = false;
        if(v%3==0 && vertices.count(v/3)) in[v/3] = false;
    }
    ll start = -1;
    for(auto s:in)
    {
        if(s.second){
            start = s.first;
            break;
        }
    }
    while(n>0)
    {
        cout<<start<<" ";
        if(vertices.count(2*start))
        {
            start = 2*start;
        }
        else if(start%3==0 && vertices.count(start/3))
        {
            start = start/3;
        }
        n--;
    }
    return 0;
}