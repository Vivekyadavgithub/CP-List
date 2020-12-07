#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	getline(cin, s);

	map<char, int> mp;

	for(int i = 0 ; i < s.size() ; i++)
	{
		if(mp.find(s[i]) == mp.end()){
			mp.insert({s[i], 1});
		}
		else mp[s[i]] += 1;

	}

	int max = 0;
    char ch;
	for(auto it : mp)
	{
		//cout << it.first << " " << it.second << "\n";
		if(it.second > max) { max = it.second; ch = it.first; } 
	}
	cout << ch << " " << max << "\n";
}
