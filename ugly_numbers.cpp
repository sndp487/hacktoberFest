// https://www.geeksforgeeks.org/ugly-numbers/

#include<bits/stdc++.h>
using namespace std;

int ugly_number(int n){
	int size = 1,a,b,c;
	vector<int> num;
	num.push_back(1);
	while(size < n){	
		a = ceil(((num[size - 1]+1)*1.0/2.0));
		b = ceil(((num[size - 1]+1)*1.0/3.0));
		c = ceil(((num[size - 1]+1)*1.0/5.0));
		a = *lower_bound(num.begin(),num.end(),a);
		b = *lower_bound(num.begin(),num.end(),b);
		c = *lower_bound(num.begin(),num.end(),c);
		num.push_back(min(2*a,min(3*b,5*c)));
		size++;
	}
	return num[n-1];
}

int main(){
	int n; 
	cin >> n;
	while(n--){
		int nn; cin >> nn;
		cout << ugly_number(nn) << endl;
	}
}
