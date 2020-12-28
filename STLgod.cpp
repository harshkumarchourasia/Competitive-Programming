#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool f(int x, int y)
{
    return x>y;
};
int main()
{
    
    ios::sync_with_stdio(0);
    cin.tie(0),cin.tie(0);
    /*
    vector<int> A = {1,12,33,4};
    
    sort(A.begin(),A.end());
    
    bool present = binary_search(A.begin(),A.end(),33);
    //cout<<present;

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    //1,4,12,33,100,100,100,100,123
     A.push_back(123);
    vector<int>::iterator it = lower_bound(A.begin(),A.end(),100);  // >=
    vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100);  // >
    //cout<<*it<<" "<<*it2<<'\n';
    //cout<<it2-it;  

    sort(A.begin(),A.end(),f);


    for(int &x:A)
    {

        x++;
    }
        for(int  &x:A)
    {
        
        cout<<x<<" ";
    }
    */

   //set
    set<int> s;
    s.insert(1);
    s.insert(-1);
    s.insert(3);
    //for(auto x:s)
    //    cout<<x<<" ";
    //auto it = s.lower_bound(-1);
    //cout<<*it<<" ";
    //auto it2 = s.upper_bound(-1);
    //cout<<*it2<<" ";
    //auto it = s.find(5);
    //if(it==s.end())
    //{
    //    cout<<"not found";
    //}
    map<int,int> A;
    A[1] = 100;
    A[2] = 300;
    bool vis[10] = {false};
    for(auto i = 0;i<10;i++)
    {
        cout<<vis[i]<<" ";
    }
    return 0;
}