#include<bits/stdc++.h>
using namespace std;

int lis(vector<int> a,int n){
	int dp[n];
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	for (int i = 1; i < n; ++i){
		for(int j = i - 1; j >= 0; j--){
			if(a[j] <= a[i]) dp[i] = max(dp[i],dp[j] + 1);
		}
	}
	return *max_element(dp, dp+n);
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	cout << lis(a,n) << endl;
	return 0;
}