#include <iostream>
#include <cmath>
using namespace std;

int calculate () ;
float distance, elevation;

main ()
{


	float height, rad;

	calculate();

	rad = elevation * (1 / 57.2958);

	height = tan (rad) * distance ;

	cout<<"The height of Tree is: "<<height;
	

}

int calculate ()
{

	cout<<"Enter Distance from Base of Tree: ";
	cin >> distance;
	cout<<endl;

	return distance;

	cout<<"Enter Angle of Elevation in degrees: ";
	cin >> elevation;
	cout<<endl;

	return elevation;

}