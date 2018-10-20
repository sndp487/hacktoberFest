#include<bits/stdc++.h>
using namespace std;

#define ll long long 
void permutate(string a, int l, int r){
	// if(l == r){
	// 	cout << a << endl;
	// }
	// else{
	// 	for(int i = l; i <= r; i++){
	// 		swap(a[i],a[l]);
	// 		permutate(a,l+1,r);
	// 		swap(a[i],a[l]);
	// 	}
	// }
	do{
		cout << a << endl;
	}while(next_permutation(a.begin(), a.end()));
}

void solve(){
	string a;
	cin >> a;
	cout << endl;
	permutate(a,0,a.length() - 1);	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	solve();
	return 0;
}