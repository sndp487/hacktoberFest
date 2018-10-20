// https://practice.geeksforgeeks.org/problems/largest-subsquare-surrounded-by-x/0

#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
	int n;
	cin >> n;
	cin.clear(), cin.ignore();
	char a[n][n];
	int dp1[n][n], dp2[n][n];
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> a[i][j];
			dp1[i][j] = dp2[i][j] = 0;
		}
	}
	for (int i = n - 1; i >= 0; --i)
	{
		for (int j = n - 1; j >= 0; --j)
		{
			dp1[i][j] = dp2[i][j] = a[i][j] == 'X';
			if(a[i][j] == 'X'){
				if(i + 1 < n){
					dp2[i][j] += dp2[i+1][j];
				}
				if(j+1 < n){
					dp1[i][j] += dp1[i][j+1];
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int a = dp1[i][j];
			int b = dp2[i][j];
			int c = min(a,b);

			for(int k = 0; k < c; k++){
				int d = dp1[i+k][j];
				int e = dp2[i][j+k];
				if(d >= k + 1 && e >= k + 1){
					ans = max(ans,k+1);
				}
			}

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