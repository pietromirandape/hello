#include <iostream>
using namespace std;

int main()
{
	int numberOfLanguages;
	cout <<" Hello reader. \n"
	     <<" Welcome to C++. \n";
	
	cout <<" How many programming languages have you used?";
	cin >> numberOfLanguages;

	if (numberOfLanguages<1)
		cout <<" Read the reface. You may prefer \n"
		     <<" a more elementary bok by the same author. \n";
	else
		cout <<" Enjoy the book. \n";

}
