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

void quicksort(int l,int r,vector<int> &a){
	if(l >= r) return;
	partition(l,r,a);
	quicksort(l,partition_idx,a);
	quicksort(partition_idx+1,r,a);
}

int main(){


	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	quicksort(0,n-1,a);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << endl;
	}
}