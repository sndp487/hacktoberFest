// https://practice.geeksforgeeks.org/problems/maximum-product-subarray/0

#include<bits/stdc++.h>
using namespace std;

#define int long long

#define ll long long 

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	vector<int> b;
	multiset<int> mset;
	int j = 0, ans = INT_MIN;
	for (int i = 0; i < n; )
	{
		if(a[i] == 0){
			ans = max(ans,0ll);
			int prev = 1, k = 0;	
			while(k < j){
				ans = max(ans,*(--mset.end())/prev);
				prev *= b[k];
				mset.erase(mset.find(b[k]));
				k += 1;
			}
			b.clear();
			j = 0;
		}
		else{
			b.push_back(a[i]);
			if(j){
				b[j] *= b[j-1];
			}
			mset.insert(b[j]);
			j += 1;
		}
		i += 1;
	}
	if(j){
		int k = 0, prev = 1;
		while(k < j){
			ans = max(ans,*(--mset.end())/prev);
			prev *= b[k];
			mset.erase(mset.find(b[k]));
			k += 1;
		}
		b.clear();
		j = 0;
	}
	cout << ans << endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t; cin >> t; while(t--) solve();
	return 0;
}