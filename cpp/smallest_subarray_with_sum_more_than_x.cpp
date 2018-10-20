//https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x/0

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

void f(){
	int n,x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	int i = 0, j = 0;
	int currSum = 0;
	int ans =  INT_MAX;
	while(j < n){
		currSum += a[j];
		while(currSum > x && i <= j){
			ans = min(ans, j - i + 1);
			currSum -= a[i++];
		}
		j += 1;
	}
	cout << ans << endl;
}

void solve(){
	int t;
	cin >> t;
	while(t--){
		f();
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	solve();
	return 0;
}
