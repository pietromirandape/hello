#include <iostream>
#include <cstdlib>
using namespace std;
int value;
bool verdad;
double numberMessage=0;

void getInput(double& reciever);

int main()
{

	int sum=0;
	int numberOfLanguages;
	cout <<" Hello reader. \n"
			<<" Welcome to C++. \n";

			cout <<"\a How many programming languages have you used?\t";
	cin >> numberOfLanguages;

	if (numberOfLanguages<1)
		cout <<" Read the reface. You may prefer \n"
		     <<" a more elementary bok by the same author. \n";
	else
		cout <<" Enjoy the book. \n";

	verdad=10;
	value=2;
	cout<< value <<"\n";
	cout<< verdad<<"\n";
	double double1 = 9/static_cast<double>(value);
  // precision double
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	//
	cout<< double1<<"\n";
	enum Direction { N, S, E, W };
	// ...
	cout << W << " " << E << " " << S << " " << N << endl;

	double ramdom;
	ramdom=rand()/static_cast<double>(RAND_MAX);

	cout<< ramdom<<"\n";

	for (int i = 0; i <=1; i++) {
		sum+=i;
	}
	cout<< sum<<"\n";

	getInput(numberMessage);
	cout<< numberMessage<<"\n";
}

void getInput(double& reciever)
{
	cout<< "Enter input number: \n";
	cin>> reciever;

}
