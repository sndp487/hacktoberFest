//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k/0

#include<iostream>
#include<vector>

using namespace std;

void solve(){
	long long int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	int i = 0, j = 0;
	long long int ans = 0, curr_prod = 1;
	while(j < n){
		curr_prod *= 1ll*a[j];
		if(curr_prod < k*1ll){
			ans += 1ll*(j - i + 1);
		}
		else{
			while(curr_prod >= k && i < j){
				curr_prod /= a[i];
				i += 1;
			}
			if(curr_prod < k){
				ans += 1ll*(j - i + 1);
			}
		}
		j += 1;
	}
//	return ans;
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t; cin>>t;
	while(t--) solve();
	return 0;
}
