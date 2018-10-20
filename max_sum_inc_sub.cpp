// https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence/0

#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int dp[n];
	for(int i = 0; i < n; i++) dp[i] = a[i];
	for(int i = n - 1; i >= 0; i--){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				// cout << i << " " << j << " ";
				dp[i] = max(dp[i],a[i] + dp[j]);
				// cout << dp[i] << endl;
			}
		}
		// cout << i << ": " << dp[i] << endl;
	}
	cout << *max_element(dp,dp+n) << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t; cin >> t; while(t--) solve();
	return 0;
}