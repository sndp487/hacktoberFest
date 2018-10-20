#include<bits/stdc++.h>
#include<semaphore.h>
using namespace std;

sem_t s;

void f(){
	for (int i = 0; i < 1000; ++i)
	{
		cout << 1 << " ";
	}
	cout << endl;
}

void g(){
	for (int i = 0; i < 1000; ++i)
	{
		cout << 2 << " ";// << endl;
	}
	cout << endl;
}

int main(){
	cout << sem_init(&s,0,1) << endl;
	f(), g();
}