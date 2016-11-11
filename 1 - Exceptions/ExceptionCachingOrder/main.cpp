#include<iostream>
#include<exception>
using namespace std;

void goesWrong() {
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected)
	{
		throw bad_alloc();
	}

	if (error2Detected)
	{
		throw exception();
	}
}

int main() {

	try 
	{
		goesWrong();
	}
	catch (exception &e)//To be correct we need to put this at the end
	{
		cout << "Catching exception 1: " << e.what() << endl;
	}
	catch (bad_alloc &e)//This is wrong because we will allways catch exeption because bad_alloc is an exception
	{
		cout << "Catching exception 2: " << e.what() << endl;
	}


	system("pause");
	return 0;
}