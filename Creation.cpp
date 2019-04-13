#include<iostream>
#include<thread>

using namespace std;

void thread_function()
{
	for (int i = 0; i < 50; i++)
		cout << " Thread called" << endl;
}

int main()
{
	thread thread_object(thread_function); //Function pointer
	for (int i = 0; i < 50; i++)
		cout << " Main called" << endl;
	thread_object.join();
	cout << " Main exit" << endl;

	getchar();
	return 0;
}