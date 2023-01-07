#include <iostream>
#include <cmath>
using namespace std;

float waterAdded(float flow1, float flow2, float hours);

main()
{

    int numb1, numb2;

    while (true)
    {
        cout << "Enter the First Number: ";
        cin >> numb1;
        cout << endl;

        cout << "Enter the Second Number: ";
        cin >> numb2;
        cout << endl;

        cout<< min (numb1, numb2)<<" is the minimum Number";

        cout<<endl;
    }
    
}
