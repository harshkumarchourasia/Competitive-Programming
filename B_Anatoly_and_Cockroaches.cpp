#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
    int n;
    string s;
    cin>>n>>s;
    int be=0,bo=0,re=0,ro=0;
    int ro_,re_,bo_,be_;
    int ans = 1000000;
    for(int i = 0;i < n;i++)
    {
        if(s[i]=='r' && i%2==0) re++; 
        if(s[i]=='r' && i%2!=0) ro++;
        if(s[i]=='b' && i%2==0) be++;
        if(s[i]=='b' && i%2!=0) bo++;
    }
    int x = min(ro,be);
        ro_ =ro-x;
        bo_ =bo+x;
        re_ =re+x;
        be_ =be-x;
        ans = min(ans,x+ro_+be_);
        //cout<<ro_<<" "<<bo_<<" "<<re_<<" "<<be_<<" "<<x<<" ";
        x = min(bo,re);
        ro_ =ro+x;
        bo_ =bo-x;
        re_ =re-x;
        be_ =be+x;
        ans = min(ans,x+bo_+re_);
        //cout<<ro_<<" "<<bo_<<" "<<re_<<" "<<be_<<" "<<x<<" ";

    cout<<ans;
    return 0;
}