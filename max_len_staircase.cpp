//https://practice.geeksforgeeks.org/problems/maximum-height-of-the-staircase/0

#include<iostream>
#include<climits>

using namespace std;

int get_ans(int n){
	long long lo = 0, hi = INT_MAX, mid, calc, calc1,ans;
	while(lo < hi){
		mid = lo + (hi - lo + 1)/2;
		calc = mid*(mid + 1); calc /= 2ll;
//		calc1 = (mid + 1)*(mid + 2); calc1 /= 2ll;
//		if(calc <=n*1ll && calc1 > n*1ll){ans = mid; break;}
		if(calc > n) hi = mid - 1;
		else lo = mid;
	}
	return lo;
}

void solve(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << get_ans(n) << endl;
	}
}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	solve();	
	return 0;
}
