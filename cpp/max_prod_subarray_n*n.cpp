// https://practice.geeksforgeeks.org/problems/maximum-product-subarray/0

#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	int dp[n][n];
	int ans = INT_MIN;
	memset(dp,1,sizeof(dp));
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(j != i) dp[i][j] = dp[i][j-1]*a[j];
			else dp[i][j] = a[j];
			ans = max(ans,dp[i][j]);
		}
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t; cin >> t; while(t--) solve();
	return 0;
}