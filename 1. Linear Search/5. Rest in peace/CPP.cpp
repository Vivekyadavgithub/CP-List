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
         int n;
         cin >> n;

         if(n % 21 == 0){
         	cout << "The streak is broken!\n";
         }
         else{
         	bool ans = 0;
         	int prev = 0;
         	while(n)
         	{
                int no = n % 10;
                if(prev == 1 && no == 2){
                	ans = 1;
                	break;
                } 
                prev = no;
                n = n / 10;
         	}
         	if(ans ) cout << "The streak is broken!\n";
         	else cout << "The streak lives still in our heart!\n";
         }
    }
    
}
