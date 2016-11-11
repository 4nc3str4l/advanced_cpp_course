#include<iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		//try to allocate an enormous ammount of memory
		char *pMemory = new char[999999999];
		delete[] pMemory;
	}
};

int main() 
{
	try 
	{
		CanGoWrong wrong;
	}
	catch (bad_alloc &e) //Catch if the object can be allocated
	{
		cout << "Caught exception: " << e.what() << endl;
	}
	cout << "Still Running" << endl;
	system("pause");
	return 0;
}