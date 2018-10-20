#include<string>
#include<vector>
#include<iostream>
using namespace std;

vector<int> pre_process(string a){
	int n = a.length();
	int i, j;
	i = 0, j = 1;
	vector<int> lps(n);
	lps[0] = 0;
	while(j < n){
		if(a[i] == a[j]){
			lps[j] = i + 1;
			i += 1;		}
		else{
			while(i != 0 &&  a[i] != a[j]) i = lps[i-1];
			if(a[i] == a[j]){
				lps[j] = i + 1;
				i += 1;
			}
			else{
				lps[j] = 0;
			}
		}
		j += 1;
	}
	return lps;
}

vector<int> kmp(string pattern,string text){
	vector<int> lps = pre_process(pattern), occ;
	int p = 0, t = 0;
	while(t < text.length()){
		if(pattern[p] == text[t]){
			p++, t++;
		}
		if(p == pattern.length()){
			occ.push_back(t - p);
			p = lps[p-1];
		}
		else if(pattern[p] != text[t]){
			if(p != 0) p = lps[p-1];
			else t = t + 1;
		}
	}
	return occ;
}

int main(){
	string pattern, text;
	cin >> pattern >> text;
	vector<int> occ = kmp(pattern,text);
	for (int i = 0; i < occ.size(); ++i)
	{
		cout << occ[i] << " ";
	}
}