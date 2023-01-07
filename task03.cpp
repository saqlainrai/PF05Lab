#include <iostream>
#include <cmath>
using namespace std;

bool isSymmetrical (int number1);


main ()
{

	int number1;
	bool argu;

	cout<<"Enter Your Number: "<<endl;
	cin >> number1;
	cout<<endl;

	argu = isSymmetrical (number1);

	if ( argu == true)
	{
		cout<<"The Number is Symmetrical"<<endl;
	}
	if ( argu == false)
	{
		cout<<"The Number is Not-Symmetrical"<<endl;
	}

}

bool isSymmetrical (int number1)
{

	int num;
	int number;
	
	number = number1%10;
	num = number1 / 100;

	if ( num == number )
	{
		return true;
	}
	if ( num != number )
	{
		return false;
	}	
	return 0;

}
