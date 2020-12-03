
#pragma GCC optimize("Ofast")
#pragma GCC target ("sse4")
#include<bits/stdc++.h>
#include<algorithm>
#define pb push_back
#define pob pop_back
#define ll long long 
#define sumall(a,n) accumulate(a,a+n,0)
const int  mod  = 1000000007;
using namespace std;
 
void f()
{
    ll n;
    cin>>n;
    ll arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    ll k;
    cin>>k;
    for (int i = 0; i < n; ++i)
    {
        if(arr[i]==k)
        {
            cout<<i;
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t;
    // cin>>t;
    t= 1;
    while(t--)
    {
        f();
        cout<<endl;
        cout.flush();
    }
    return 0;
}