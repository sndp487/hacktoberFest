#include<bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(3);
	pq.push(2);
	pq.push(1);
	while(!pq.empty()){
		cout << pq.top() << endl;
		pq.pop();
	}
	return 0;
}