#include <iostream>
#include <boost/thread.hpp>


using namespace std;

void thread_func()
{
	cout << "Hello World" << endl;
}

int main()
{
	boost::thread t( thread_func);
	boost::thread u( thread_func);
	t.join();
	u.join();
}



