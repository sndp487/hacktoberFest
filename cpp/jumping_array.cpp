#include<vector>
#include<cstring>
#include<iostream>

using namespace std;

int solve(vector<int> &a){
	int n = a.size();
	int dp[n];
	memset(dp,0,sizeof(dp));
	dp[n-1] = 1;
	for(int i = n - 1; i >= 0; ){
		int last_j = -1;
		if(dp[i]){
			for(int j = i - 1; j >= 0; j--){
				if(j + a[j] >=  i) {
					dp[j] = 1;
					last_j = j;
				}
			}
		}
		if(last_j == -1){
			i--;
		}
		else i = last_j;
	}
	return dp[0];
}

int main(){
	int n; cin >> n; //size of the array
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	cout <<	solve(a);
	return 0;
}
