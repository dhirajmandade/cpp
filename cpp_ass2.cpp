//============================================================================
// Name        : cpp_ass2.cpp
// Author      : D
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:

	void InitDate();
	void PrintDateOnConsole();
	void AcceptDateFromConsole();
	void IsLeapYear();
};
void Date::InitDate()
{
	this->day=0;
	this->month=0;
	this->year=0;
}
void Date::AcceptDateFromConsole()
{    cout<<"enter day dd: ";
	cin>>day;
	cout<<"enter month mm:";
	cin>>month;
	cout<<"enter year yyyy:";
	cin>>year;

}
void Date::PrintDateOnConsole()
{
	cout<<"date:"<<this->day<<"-"<<this->month<<"-"<<this->year;
}

int main()
{
	int choice;
	Date d1;
	cout<<"0.exit\n1.InitDate\n2.AcceptDateFromConsole\n3.leap year or not";
	cout<<"enter choice:";
	cin>>choice;
	switch(choice)
	{
	case 0:
		return 1;
		break;
	case 1:
		d1.InitDate();
		break;
	case 2:
		d1.PrintDateOnConsole();
		break;
	case 3:
		d1.AcceptDateFromConsole();
		break;


	}
return 0;
}




