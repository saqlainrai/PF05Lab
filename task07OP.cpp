#include <iostream>
#include <cmath>
using namespace std;

float waterAdded(float flow1, float flow2, float hours);

main()
{

    float numb1;
    float degree;

    while (true)
    {
        cout << "Enter the Angle (Degree): ";
        cin >> degree;
        cout << endl;

        numb1 = degree * 0.0174533;

        cout<< sin(numb1)<<" is Sin of Angle "<<degree;

        cout<<endl<<endl;
    }
    
}
