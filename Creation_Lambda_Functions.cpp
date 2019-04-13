#include<iostream>
#include<thread>

using namespace std;

int main()
{
	
	thread threadObj([] { for (int i = 0; i < 10; i++) cout << " Lambda Thread "<<endl; });

	for (int i = 0; i < 10; i++) 
		cout << " Main Thread "<<endl;

	threadObj.join();

	getchar();
	return 0;
}