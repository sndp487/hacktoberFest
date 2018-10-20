// https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/
// Roughly O(n), worst case O(nlogn)

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

int min_swap_to_sort(vector<int> &a){
	int n = a.size();
	unordered_map<int,int> m;
	vector<int> b = a;
	sort(b.begin(), b.end());
	for(int i = 0; i < n; i++) m[b[i]] = i;
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			int right_idx = m[a[i]];
			int val_at_right_idx = a[right_idx];
			int curr_val = a[i];
			++ans;
			swap(a[i],a[right_idx]);
			m[curr_val] = right_idx;
			m[i] = val_at_right_idx;
		}
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << min_swap_to_sort(a) << endl;
	return 0;
}