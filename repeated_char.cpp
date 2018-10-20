//https://practice.geeksforgeeks.org/problems/repeated-character/0

#include<iostream>
#include<string> 
#include<cstring>

using namespace std;
void solve(){
	int freq[26];
	memset(freq,0,sizeof(freq));
	string a; cin >> a;
	for(char c:a) freq[c-'a'] += 1;
	int f = 0;
	for(char c:a){
		if(freq[c-'a'] > 1){cout << c << endl; f = 1; break;}
	}
	if(!f) cout << -1 << endl;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
