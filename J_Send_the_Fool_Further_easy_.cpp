#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<pair<int,int>> adj[110];
int ans = 0;
bool visited[110] = {0};
void dfs(int u, int cost)
{
    visited[u] = true;
    if(cost>ans) ans = cost;
    for(auto p:adj[u])
    {
        if(!visited[p.first])
        {
            dfs(p.first,cost+p.second);
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cin.tie(0);
    int n;
    cin>>n;
    int u,v,w;
    for(int i = 0;i<n;i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    dfs(0,0);
    cout<<ans;
    return 0;
}