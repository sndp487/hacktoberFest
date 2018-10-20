// https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix/0

#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
	int n,m;
	cin >> n >> m;
	int a[n][m], dp[n][m], ans = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
			dp[i][j] = a[i][j];
			if(a[i][j]) ans = 1;
		}
	}
	
	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < m; ++j)
		{	
			if(dp[i][j]){
				dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1])) + 1;
			}	
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