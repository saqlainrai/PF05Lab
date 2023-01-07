#include <iostream>
#include <cmath>
using namespace std;

float positiveQuadratic(float a, float b, float c);
float negativeQuadratic(float a, float b, float c);


main ()
{


	int a,b,c;
	float squareb, ac4, inside;
	float disc,x1, x2;
	float numenator1;
	float numenator2;
	float denominator;

	cout<<"Enter Value of A: ";
	cin>>a;
	cout<<endl;

	cout<<"Enter Value of B: ";
	cin>>b;
	cout<<endl;

	cout<<"Enter Value of C: ";
	cin>>c;
	cout<<endl;

	squareb = pow(b, 2);
	ac4 = 4 * a * c;
	inside = squareb - ac4;
	disc = sqrt (inside);

	numenator1 = -b + disc;
	numenator2 = -b - disc;
	denominator = 2*a;

	x1=numenator1/denominator;
	x2=numenator2/denominator;

	cout<<"x1: "<<x1<<endl;
	cout<<"x2: "<<x2<<endl;

}
float positiveQuadratic(float a, float b, float c)
{




}
float negativeQuadratic(float a, float b, float c)
{



}
