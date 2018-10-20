// https://www.geeksforgeeks.org/count-numbers-from-1-to-n-that-have-4-as-a-a-digit/
#include<bits/stdc++.h>
using namespace std;

int f(int x){
	if(x <= 3) return 0;
	else {
		int a =  ( x - 4 )/10 + 1;
		if(x >= 40) a += (((x - 40)/100) + 1)*9;
		return a;
	}
}

int main(){
	int n; cin >> n;
	cout << f(n) << endl;
}