#include "iostream"
#include "string"
using namespace std;
class Date {
private:
	int date, month, year;
public:
	Date()
	{
		date = 0;
		month = 0;
		year = 0;
	}
	Date(int date1,int month1, int year1)
	{
		date = date1;
		month = month1;
		year = year1;
	}
	void setDate(int date1)
	{
		date = date1;
	}
	int getDate()
	{
		return date;
	}
	void setMonth(int month1)
	{
		month = month1;
	}
	int getMonth()
	{
		return month;
	}
	void setYear(int year1)
	{
		year = year1;
	}
	int getYear()
	{
		return year;
	}
	void displayDate()
	{
		cout << date << " - " << month << " - " << year<<endl;
	}
};

Date compare(Date obj1, Date obj2)
{
	if (obj1.getDate() > obj2.getDate() && obj1.getMonth() == obj2.getMonth() && obj1.getYear() == obj2.getYear())
	{
		return obj1;
	}
	else if (obj1.getDate() < obj2.getDate() && obj1.getMonth() == obj2.getMonth() && obj1.getYear() == obj2.getYear()) {
		return obj2;
	}

	if (obj1.getDate() > obj2.getDate() && obj1.getMonth() > obj2.getMonth() && obj1.getYear() == obj2.getYear())
	{
		return obj1;
	}
	else if (obj1.getDate() < obj2.getDate() && obj1.getMonth() < obj2.getMonth() && obj1.getYear() == obj2.getYear())
	{
		return obj2;
	}
	if (obj1.getDate() > obj2.getDate() && obj1.getMonth() > obj2.getMonth() && obj1.getYear() > obj2.getYear())
	{
		return obj1;
	}
	else if (obj1.getDate() < obj2.getDate() && obj1.getMonth() < obj2.getMonth() && obj1.getYear() < obj2.getYear())
	{
		return obj2;
	}
	if (obj1.getDate() == obj2.getDate() && obj1.getMonth() == obj2.getMonth() && obj1.getYear() > obj2.getYear())
	{
		return obj1;
	}
	else if (obj1.getDate() == obj2.getDate() && obj1.getMonth() == obj2.getMonth() && obj1.getYear() < obj2.getYear())
	{
		return obj1;
	}
	if (obj1.getDate() == obj2.getDate() && obj1.getMonth() > obj2.getMonth() && obj1.getYear() == obj2.getYear())
	{
		return obj1;
	}
	else if (obj1.getDate() == obj2.getDate() && obj1.getMonth() > obj2.getMonth() && obj1.getYear() == obj2.getYear())
	{
		return obj1;
	}

}
int main()
{
	Date obj1(28,10,2002), obj2(29,9,2002);
	obj1.displayDate();
	obj2.displayDate();
	Date obj3=compare(obj1, obj2);
	obj3.displayDate();

	return 0;
}