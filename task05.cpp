#include <iostream>
#include <cmath>
using namespace std;

int resultHours, resultMinutes;

int calculate(int hours, int minutes);
int resultFunction(int resultHours, int resultMinutes);

main ()
{

	int hours, minutes;

    while(true)
    {
        cout << "Enter Hours(0-23): "<<endl;
        cin >> hours;
        cout << endl;

        cout << "Enter Minutes(0-59): "<<endl;
        cin >> minutes;
        cout << endl;

        calculate(hours, minutes);

        resultFunction(resultHours, resultMinutes);
    }
}
int calculate( int hours, int minutes )
{
    int time, rminutes, rhours, finaltime;

    time = (hours*60)+(minutes);
    finaltime=time+15;

    rminutes=finaltime%60;
    rhours=finaltime/60;

    if( rhours > 23 )
    {
        resultHours = rhours % 24;
    }
    if ( rminutes > 59)
    {
        resultMinutes = rminutes%60;
    }
    if ( rhours <= 23)
    {
        resultHours = rhours;
    }
    if ( rminutes <= 59)
    {
        resultMinutes = rminutes;
    }
    cout<<endl;
}
int resultFunction(int resultHours, int resultMinutes)
{
    cout<<resultHours<<" : "<<resultMinutes<<endl;
}