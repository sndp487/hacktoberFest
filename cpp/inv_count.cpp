//https://www.youtube.com/watch?v=k9RQh21KrH8

#include<iostream>
#include<climits>
#include<vector>

using namespace std;
int mergeSort(int l,int r,vector<int> &a){
	int inv = 0;
	if(l < r){
		int mid = l + (r - l)/2;
		inv += mergeSort(l,mid,a);
		inv += mergeSort(mid+1,r,a);
		int t1[mid - l + 2];
		int t2[r - (mid + 1) + 2];
		int t3[r - l + 1];
		t1[mid - l + 1] = INT_MAX;
		t2[r - (mid + 1) + 1] = INT_MAX;
		int i = 0, j = 0, k = 0;
		for (int i = l, j = 0; i <= mid; ++i, ++j){
			/* code */
			t1[j] = a[i];
		}
		for (int i = mid + 1, j = 0; i <= r; ++i, ++j){
			/* code */
			t2[j] = a[i];
		}
		i = j = 0;
		while(k < r - l + 1){
			if(t1[i] <= t2[j]){
				t3[k++] = t1[i++];
			}
			else{
				inv += mid - l - i + 1;
				t3[k++] = t2[j++];
			}
		}
		for(int i = l, j = 0; i <= r; i++, j++){
			a[i] = t3[j];
		}
	}
	return inv;
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << "#inv " << mergeSort(0,n-1,a) << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	// cout << "inversions: " << inv << endl;
}