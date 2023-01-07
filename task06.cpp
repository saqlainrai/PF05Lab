#include <iostream>
#include <cmath>
using namespace std;

string translate(int number);

main ()
{

	int number;
    float name;

    while(true)
    {
        cout<<"Enter the Number: "<<endl;
        cin >> number;
        cout<<endl;

        translate(number);

    }
}
string translate(int number)
{

    int first, second;

    first=number/10;
    second=number%10;

    // cout<<first<<endl;
    // cout<<second<<endl;

    if ( number <= 10)
    {
        if(number==1)
        {
            cout<<"One"<<endl;
        }
        if(number==2)
        {
            cout<<"Two"<<endl;
        }
        if(number==3)
        {
            cout<<"Three"<<endl;
        }
        if(number==4)
        {
            cout<<"Four"<<endl;
        }
        if(number==5)
        {
            cout<<"Five"<<endl;
        }
        if(number==6)
        {
            cout<<"Six"<<endl;
        }
        if(number==7)
        {
            cout<<"Seven"<<endl;
        }
        if(number==8)
        {
            cout<<"Eight"<<endl;
        }
        if(number==9)
        {
            cout<<"Nine"<<endl;
        }
        if(number==10)
        {
            cout<<"Ten"<<endl;
        }
        cout<<endl;
    }
    if ( number > 20 )
    {
        
        if(first==2)
        {
            cout<<"Twenty ";
        }
        if(first==3)
        {
            cout<<"Thirty ";
        }
        if(first==4)
        {
            cout<<"Forty ";
        }
        if(first==5)
        {
            cout<<"Fifty ";
        }
        if(first==6)
        {
            cout<<"Sixty ";
        }
        if(first==7)
        {
            cout<<"Seventy ";
        }
        if(first==8)
        {
            cout<<"Eighty ";
        }
        if(first==9)
        {
            cout<<"Ninety ";
        }
        if(second==1)
        {
            cout<<"One";
        }
        if(second==2)
        {
            cout<<"Two";
        }
        if(second==3)
        {
            cout<<"Three";
        }
        if(second==4)
        {
            cout<<"Four";
        }
        if(second==5)
        {
            cout<<"Five";
        }
        if(second==6)
        {
            cout<<"Six";
        }
        if(second==7)
        {
            cout<<"Seven";
        }
        if(second==8)
        {
            cout<<"Eight";
        }
        if(second==9)
        {
            cout<<"Nine";
        }
        cout<<endl<<endl;
    }
    
}