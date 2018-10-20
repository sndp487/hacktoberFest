// https://www.geeksforgeeks.org/largest-subarray-with-equal-number-of-0s-and-1s/

#include<bits/stdc++.h>
using namespace std;

pair<int,int> findAns(vector<int> a){
	int n = a.size();
	unordered_map<int,int> m;
	for(int i = 0; i < n; i++){
		if(a[i] == 0) a[i] = -1;
		if(i) a[i] += a[i-1];
		m[a[i]] = max(m[a[i]],i);
	}
	int ans = 0, p = -1, q = -1;
	int req = 0;
	for(int i = 0; i < n; i++){
		if(m[req] >= i){
			if(ans < m[req] - i){
				ans = m[req] - i;
				p = i, q = m[req];
			}
		}
		req += a[i];
	}
	return {p,q};
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	pair<int,int> ans = findAns(a);
	cout << ans.first << " " << ans.second << endl;
	return 0;
}