// http://users.monash.edu/~lloyd/tildeAlgDS/Sort/Flag/

#include<bits/stdc++.h>
using namespace std;

const int N = 1000;

void partition(vector<int> &a){
	int n = a.size();
	int i = 0, j = 0, k = n - 1;

	while(j <= k){ //while in unknown region

		//[0,i-1] -> 0's
		//[i,j-1] -> 1's
		//[k+1,n-1] -> 2's

		if(a[j] == 0){
			swap(a[i],a[j]);
			i += 1, j += 1;
		}
		else if(a[j] == 1){
			j += 1;
		}
		else{
			swap(a[j],a[k]);
			k -= 1;
		}
	}
}

int main(){
	int n = rand() % N;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		a[i] = rand() % 3;
	}
	partition(a);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}