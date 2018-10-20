//https://practice.geeksforgeeks.org/problems/merge-two-strings/0

#include<iostream>
#include<string>

using namespace std;

string merged(string a,string b){
	int n = a.length(), m = b.length();
	string ans = "";
	int i = 0, j = 0;
	int f = 1;
	while(i < n || j < m){
		if(i < n && j < m){
			if(f) ans += a[i++]; else ans += b[j++];
			f = !f;
		}
		else if(i < n){
			while(i < n) ans += a[i++];
		}
		else while(j < m) ans += b[j++];
	}
	return ans;
}

void solve(){
	int t; cin >> t;
	string a, b;
	while(t--){
		cin.clear(), cin.ignore();
		cin >> a >> b;
		cout << merged(a,b) << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	solve();
	return 0;
}
