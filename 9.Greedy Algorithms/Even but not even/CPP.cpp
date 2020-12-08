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
    	int n ;
    	cin >> n;
         string s;
         cin >> s;
         int br = 0;
         string ans = "";
         bool a = 0;
         for(int i = 0 ; i < s.size() ; i++)
         {
         	int x = s[i] - 48;
         	if(x % 2 == 1){
         		ans += s[i];
         		br++;
         	}
         	if(br == 2){ a = 1;  break; }
         }
         if(a) cout << ans << "\n";
         else cout << "-1\n";
    }
    
}
