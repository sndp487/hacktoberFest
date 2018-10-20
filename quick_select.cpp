#include <bits/stdc++.h>
using namespace std;

int partition_idx;

void partition(int l,int r,vector<int> &a){
	if(l >= r) {partition_idx = l; return;}
	if(a[l] < a[r]) partition(l,r-1,a);
	else{
		swap(a[l],a[r]);
		swap(a[l+1],a[r]);
		partition(l+1,r,a);
	}
}

int quickselect(int l,int r, int k, vector<int> &a){
	partition(l,r,a);
	if(partition_idx - l == k){
		return a[partition_idx];
	}
	else if(partition_idx - l > k){
		return quickselect(l,partition_idx - 1, k,a);
	}
	else{
		return quickselect(partition_idx + 1, r, k - (partition_idx - l + 1),a);
	}
}

int main(){


	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int k;
	cin >> k;
	cout << quickselect(0,n-1,k,a);
}