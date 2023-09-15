

#include<iostream>
#include<thread>
#include<mutex>


int add(int x, int y);

	std::mutex mutex;

int main()
{
	//////////////////////////////////////////////////////////////// simple thread program in c++ ////////////////////////////
	std::thread t1(add, 3, 3);
	std::thread t2(add, 23, 23);

	std::thread t3(add, 33, 33);
	std::thread t4(add, 53, 53);
	std::thread t5(add, 63, 63);
	std::thread t6(add, 73, 73);
	std::thread t7(add, 83, 83);

	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	t6.join();
	t7.join();



	return 0;
}



int add(int x, int y)
{
	mutex.lock();
	std::cout << "\n" << x << " + " << y << " : " << (x + y);
	mutex.unlock();
	return (x + y);
}