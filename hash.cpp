#include<functional>
#include<iostream>
#include<limits>
using namespace std;


int main(int argc, char **argv){
	hash<string> str_hash;
	cout << str_hash(argv[1]) << endl;
	cout << str_hash(argv[2]) << endl;
	cout << numeric_limits<size_t>::max() << endl;
	cout << numeric_limits<size_t>::min() << endl;

	cout << "________________________" << endl;
	

	return 0;
}

