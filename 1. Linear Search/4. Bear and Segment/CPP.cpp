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
    while(t--){
         string s;
         cin >> s;
         bool ans = 0;
         for(int i = 0 ; i < s.size() ; i++)
         {
            if(ans && s[i] == '1') {
            	ans = 0;
            	break;
            }
            else if(s[i] == '1'){
	             ans = 1;
	             for(; i < s.size() ; i++)
	             {
	             	if(s[i] == '0') break;
	             }
            }
         }
         if(ans ) cout << "YES\n";
         else cout << "NO\n";
    }
    
}
