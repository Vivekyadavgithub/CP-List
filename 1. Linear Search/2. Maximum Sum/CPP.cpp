#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define mod 1e9+7

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> arr(n);

	for(int i = 0 ; i < n ; i++) cin >> arr[i];

    int sum = 0, count = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i] >= 0){
			sum += arr[i];
			count++;
		}
	}	

	if(count == 0)
	{
		int max = INT_MIN;
		for(int i = 0 ; i < n ; i++)
		{
             if(arr[i] > max)  max = arr[i]; 
		}
		sum = max;
		count = 1;
	}
	cout << sum << " " << count << "\n";
}

