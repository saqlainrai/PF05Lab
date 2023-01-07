#include <iostream>
#include <cmath>
using namespace std;

float waterAdded(float flow1, float flow2, float hours);
float percentage(float litres, float waterGained);
float pipeFlow1 (float flow1, float hours, float waterGained );
float pipeFlow2 (float flow2, float hours, float waterGained);

main()
{

    float litres, flow1, flow2, hours;
    float waterGained;
    float perc;
    float waterFlow1, waterFlow2;
    float per, waterPerHour, hourOverFlow;
    float litreOverFlow;

    while (true)
    {
        cout << "Enter the Volume of Pool (litres): ";
        cin >> litres;
        cout << endl;

        cout << "Enter the Flow Rate of Pipe 1 (per hours): ";
        cin >> flow1;
        cout << endl;

        cout << "Enter the Flow Rate of Pipe 2 (per hours): ";
        cin >> flow2;
        cout << endl;

        cout << "Enter the Time Worker was Absent (hours): ";
        cin >> hours;
        cout << endl;

        waterGained = waterAdded(flow1, flow2, hours);

        // cout<<waterGained<<endl;

        perc = percentage(litres, waterGained);

        waterFlow1 = pipeFlow1 ( flow1, hours, waterGained );
        waterFlow2 = pipeFlow2 ( flow2, hours, waterGained );

        //if water does not overflow
        if (perc <= 100)
        {
            cout << "The Pool is " << perc << "%" << " full.";
            cout << endl<<endl;
            cout << "Contribution of Pipe 1:.. "<<waterFlow1<<"%. and of Pipe 2:.. "<<waterFlow2<<"%."<<endl<<endl;
        }

        //if water will overflow
        if (perc > 100)
        {
            per = perc - 100;
            litreOverFlow = (per/100.0)*litres;

            waterPerHour=flow1+flow2;
            hourOverFlow = litreOverFlow / waterPerHour ;

            cout <<"For "<<hourOverFlow<<" hours the pool overflows with ";
            cout <<litreOverFlow<<" liters"<<endl;

        }
        cout<<endl;
    }
}

//this fnc will calculate total water in given time.
float waterAdded(float flow1, float flow2, float hours)
{
    float water1, water2, wholeWater;

    water1 = flow1 * hours;

    water2 = flow2 * hours;

    wholeWater = water1 + water2;

    return wholeWater;
}

//this fnc will show the percentage of pool filled.
float percentage(float litres, float waterGained)
{
    return (waterGained / litres) * 100;
}

//this fnc will give percentage of water contributed by pipe1.
float pipeFlow1 (float flow1, float hours, float waterGained)
{
    float calculatePercentage, calculateWater, calculateRatio;

    calculateWater = flow1*hours;
    calculateRatio = calculateWater/waterGained;
     return calculatePercentage = calculateRatio * 100;
}

//this fnc will give percentage of water contributed by pipe2.
float pipeFlow2 (float flow2, float hours, float waterGained)
{
    float calculatePercentage, calculateWater, calculateRatio;

    calculateWater = flow2*hours;
    calculateRatio = calculateWater/waterGained;
     return calculatePercentage = calculateRatio * 100;
}
