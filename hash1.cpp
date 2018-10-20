//https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not/0

#include<functional>
#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        hash < vector<int> > vi_hash;
        size_t h1 = vi_hash(a);
        for(int i = 0; i < n; i++) cin >> a[i];
        size_t h2 = vi_hash(a);
        cout << (h1 == h2) << endl;
    }
    
}
