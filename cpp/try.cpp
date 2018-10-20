#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
int main(){
	int till = 6.25 * (1e8);
	
	auto start = high_resolution_clock::now();
	// int a = 1;
	for (int i = 0; i < till; ++i)
	{
		// a++;
		/* code */

	}
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
 	cout << duration.count()/1000000.0 << endl;
    return 0;
}
