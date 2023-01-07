#include <iostream>
using namespace std;

int add (int numb1, int numb2);
float division (int numb1, int numb2);
int isGreater (int numb1, int numb2);

main ()
{
	system("cls");
	int numb1=0, numb2=0;
	float total;
	while(true)
	{
		cout<<"Enter number 1: ";
		cin>>numb1;
		cout<<endl;

		cout<<"Enter number 2: ";
		cin>>numb2;	
		cout<<endl;

		isGreater (numb1, numb2);
		cout<<endl;
	}		
}

int add (int numb1, int numb2)
{

	int sum = numb1 + numb2;
	return sum;

}

float division (int numb1, int numb2)
{

	float result = numb1 / numb2;
	return result;

}

int isGreater (int numb1, int numb2)
{
	if (numb1 > numb2)
	{
		cout<<"The Greater Number is: "<<numb1<<endl;
	}
	if (numb1 < numb2)
	{
		cout<<"The Greater Number is: "<<numb2<<endl;
	}
	if (numb1 == numb2)
	{
		cout<<"Both Numbers are Equal"<<endl;
	}
}