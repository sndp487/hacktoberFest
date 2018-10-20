#include<bits/stdc++.h>
using namespace std;

#define ll long long 

const int maxn = 101;
int dp[maxn][maxn];
int val[maxn], wt[maxn];

int knapsack(int i, int n, int rem){
	if(i < n){
		int a = 0, b = 0;
		if(wt[i] <= rem){
			a = val[i] + knapsack(i+1,n,rem-wt[i]);
		}
		b = knapsack(i+1,n,rem);
		return max(a,b);
	}
	return 0;
}

void solve(){
	int n,w;
	cin >> n >> w;
	for (int i = 0; i < n; ++i)
	{
		cin >> val[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> wt[i];
	}
	for (int i = 0; i < maxn; ++i)
	{
		for (int j = 0; j < maxn; ++j)
		{
			dp[i][j] = -1;
		}
	}
	cout << knapsack(0,n,w);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}