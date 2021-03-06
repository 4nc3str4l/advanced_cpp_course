#include<iostream>
using namespace std;

class MyException : public exception 
{
public:
	virtual const char* what() const throw() 
	{
		return "Something bad happended!";
	}
};

class Test 
{
public:
	void goesWrong() 
	{
		throw MyException();
	}
};

int main() 
{
	Test test;
	try 
	{
		test.goesWrong();
	}
	catch (MyException &e)
	{
		cout << e.what() << endl;
	}
	system("pause");
	return 0;
}