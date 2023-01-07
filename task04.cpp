#include <iostream>
#include <cmath>
using namespace std;

string isType (int number);


main ()
{

	int number;
	string argu;

	cout<<"Enter Your Number: "<<endl;
	cin >> number;
	cout<<endl;

	argu = isType(number);

	if ( argu == "tr")
	{
		cout<<"Evenish"<<endl;
	}
	if ( argu == "fa" )
	{
		cout<<"Oddish"<<endl;
	}
}
string isType (int number)
{

	int r1, r2, r3, r4;
	int number1, number2, number3, number4, number5;
	int sum, result;
	
	number1 = number%10;
	r1 = number/10;
	number2 = r1%10;
	r2 = number/100;
	number3 = r2%10;
	r3 = number/1000;
	number4 = r3%10;
	r4 = number/10000;
	number5 = r4%10;

	sum = number1 + number2 + number3 + number4 + number5;

	result = sum % 2;
	
	if ( result == 0 )
	{
		return "tr";
	}
	if ( result != 0 )
	{
		return "fa";
	}	

	return 0;
}
