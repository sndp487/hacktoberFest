#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int b(int l,int r,vector<int> a){
	if(l == r) return a[l];
	else if(l < r){
		int m = l + (r - l)/2;
		if(a[l] <= a[r]) return b(l,m,a);
		// else if(a[l] < a[r]) return b(m,r,a);
		else return b(m,r,a);
	}
	else{
		return INT_MAX;
	}
}

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << b(0,n-1,a) << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t; cin >> t; while(t--) solve();
	return 0;
}