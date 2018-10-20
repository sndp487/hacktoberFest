//Longest (strictly) Increasing Subsequence in O(n*log(n))
//finds the lexicographically smallest subsequence with maximum length

#include<bits/stdc++.h>
using namespace std;

int lis(vector<int> a,int n){
	vector<int> p;
	for (int i = 0; i < n; ++i){
		auto it = lower_bound(p.begin(),p.end(),a[i]+1);
		if(it == p.end()) p.push_back(a[i]);
		else{
			p[distance(p.begin(),it)] = a[i];
		}
	}
	return p.size();
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