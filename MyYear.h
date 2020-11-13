#pragma once

#include <iostream>

using namespace std;


class MyYear {

	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
public:
	int day;
	int month;
	int year;

	void increaseDate();
	MyYear();
	MyYear(int, int, int);
private:


};

MyYear::MyYear()
{
	day = 1;
	month = 1;
	year = 2020;
}
MyYear::MyYear(int my_day, int my_month, int my_year)
{
	day = my_day;
	month = my_month;
	year = my_year;
}

void MyYear::increaseDate()
{
	cout << "Today: " << day << "/" << month << "/" << year << endl<<"Next 10 days:"<<endl;

	for (int i = 0; i < 10; i++)
	{
		if (day < months[month-1] )
		{
			day++;
		}
		else if (day == months[month-1] && month == 12)
		{
			day = 1;
			month = 1;
			year++;

		}
		else if (day == months[month-1])
		{
			day = 1;
			if (month < 12)
			{
				month++;
			}
			else if (month == 12)
			{
				month == 1;
				year++;
			}
		}
		cout << day << "/" << month << "/" << year << endl;


	}



}


