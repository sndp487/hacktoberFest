// https://www.geeksforgeeks.org/remove-duplicates-sorted-array/

#include<bits/stdc++.h>
using namespace std;

vector<int> removeDup(vector<int> a){
	int n = a.size();
	int i = 0, j = 0;
	while(i < n - 1){
		if(a[i] == a[i+1]) i++;
		else{
			swap(a[i],a[j]);
			i += 1;
			j += 1;
		} 
	}
	a[j] = a[n-1];
	return vector<int>(a.begin(),a.begin() + j + 1);
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	a = removeDup(a);
	for(int n:a) cout << n << " ";
	return 0;
}