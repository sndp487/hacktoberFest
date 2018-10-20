#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve(){
	int n,m;
	cin >> n >> m;

	char a[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}	

	int i = 0, j = 0;
	while(i < n && j < m){
		for(int k = j; k < m; k++){
			cout << a[i][k] << " ";
		}
		for(int k = i + 1; k < n; k++){
			cout << a[k][m-1] << " ";
		}
		for(int k = m - 2; k >= i; k--){
			cout << a[n - 1][k] << " ";
		}
		for(int k = n - 2; k > i; k--){
			cout << a[k][j] << " ";
		} cout << endl;
		i += 1, j += 1;
		n -= 1, m -= 1;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	solve();
	return 0;
}