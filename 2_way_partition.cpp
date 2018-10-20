// http://users.monash.edu/~lloyd/tildeAlgDS/Sort/Flag/

#include<bits/stdc++.h>
using namespace std;

const int N = 1000;

void partition(vector<int> &a){
	int n = a.size();
	int i = 0, j = n - 1;
	while(i <= j){ //while in the unknown region

		//[0,i-1] -> 0's
		//[j+1,n-1] -> 1's
		
		if(a[i] == 0) i++;
		else swap(a[i],a[j]), j--;
	}
}

int main(){
	int n = rand() % N;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		a[i] = rand() % 2;
	}
	partition(a);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}