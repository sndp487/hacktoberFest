#include<bits/stdc++.h>
using namespace std;

#define ll long long 

bool cmp(int a,int b){
	return a > b;
}

void solve(){

	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i){
			cin >> a[i];
	}
	cout << is_sorted(a.begin(), a.end()) << endl;
	cout << is_sorted(a.begin(), a.end(), greater<int>()) << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	solve();
	return 0;
}