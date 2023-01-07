#include <iostream>
#include <cmath>
using namespace std;

main ()
{

	float numb1;
	float total;

	cout<<"Enter Number 1: ";
	cin >>numb1;
	cout<<endl;

	total = sqrt (numb1);
	cout<<total<<" is the square root of Number 1"<<endl;

	total = cbrt (27);
	cout<<total<<" Cube root of 27"<<endl;

	total = ceil (3.5);
	cout<<total<<" is ceiling of 3.5"<<endl;

	total = floor (3.7);
	cout<<total<<" is floor of 3.7"<<endl;

	

}