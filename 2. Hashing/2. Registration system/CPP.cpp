#include<bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	/*#ifndef ONLINE_JUDGE
	  // for getting input from input.txt
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
    #endif*/
    int t;
    cin>>t;
    unordered_map<string, int> mp;
    for(int i = 0 ; i < t ; i++)
    {
         string s;
         cin >> s;

         if(mp.find(s) == mp.end()){
         	cout << "OK\n";
         	mp.insert({s, 0});
         }
         else{
            mp[s] += 1;
            cout << s << mp[s] << "\n";
         }
    }
    
}
