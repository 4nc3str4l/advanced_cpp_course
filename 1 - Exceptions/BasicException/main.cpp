#include<iostream>
using namespace std;

void mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;
	bool error3 = false;

	if (error1) 
	{
		//As other programming language function stops here and throws the errors
		throw 8;
	}

	if (error2)
	{
		throw "Something wnt wrong.";
	}

	if (error3)
	{
		throw string("Something else went wrong.");
	}
}

void usesMightGoWrong() {
	//We don't have to handle exceptions here if we don't want
	mightGoWrong();
}

/*
	We can catch multiple errors which is quite cool
*/
int main()
{
	try 
	{
		usesMightGoWrong();
	}
	catch (int e)
	{	
		cout << "Error Code: " << e << endl;
	}
	catch (char const * e)
	{
		cout << "Error message: " << e << endl;
	}
	catch (string &e) 
	{
		cout << "String error message: " << e.c_str() << endl;
	}

	cout << "Still running" << endl;
	system("pause");
	return 0;
}

