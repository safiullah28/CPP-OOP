#include "iostream"
#include "string"
using namespace std;


class Time {
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time():hours(0),minutes(0),seconds(0)
	{	}

	Time(int hours,int minutes,int seconds):hours(hours),minutes(minutes),seconds(seconds)
	{
		this->hours = (hours >= 0 && hours <= 23) ? hours : 0;
		this->minutes = (minutes >= 0 && minutes <= 59) ? minutes : 0;
		this->seconds = (seconds >= 0 && seconds <= 59) ? seconds : 0;
	}


	Time(int hours, int minutes) :hours(hours), minutes(minutes)
	{
		this->hours = (hours >= 0 && hours <= 23) ? hours : 0;
		this->minutes = (minutes >= 0 && minutes <= 59) ? minutes : 0;
	}

	void sethours(int hours)
	{
		this->hours = (hours >= 0 && hours <= 23) ? hours : 0;
	}

	void setMinutes()
	{
		this->minutes = (minutes >= 0 && minutes <= 59) ? minutes : 0;
	}

	void setSeconds(int second)
	{

		this->seconds = (seconds >= 0 && seconds <= 59) ? seconds : 0;
	}

	int getHours()const
	{
		return this->hours;
	}
	
	int getMinutes()const
	{
		return this->minutes;
	}


	int getSeconds()const
	{
		return this->seconds;
	}


	friend ostream& operator<<(ostream& out, const Time& obj)
	{
		out << obj.hours << " : " << obj.minutes << " : " << obj.seconds << endl;
		return out;
	}


	friend istream& operator>>(istream& in,Time& obj)
	{
		cout << "Enter hours : ";
		in >> obj.hours;
		cout << "Enter minutes : ";
		in >> obj.minutes;
		cout << "Enter seconds : ";
		in >> obj.seconds;
		return in;
	}


	int operator-(const Time&obj)
	{
		Time temp;
		int sec;
		temp.hours = this->hours - obj.hours;
		if (temp.hours > 0)
		{
			temp.hours = temp.hours * 3600;
			sec = temp.hours;
		}
		temp.minutes = this->minutes - obj.minutes;
		if (temp.minutes > 0)
		{
			temp.minutes = temp.minutes * 60;
			sec = temp.minutes + temp.hours;
		}
		temp.seconds = this->seconds - obj.seconds;
		sec = sec + temp.seconds;
		return sec;

	}


	Time operator++()
	{
		this->seconds++;
		if (this->seconds == 60)
		{
			this->seconds = 0;
			this->minutes++;
			if (this->minutes == 60)
			{
				this->minutes = 0;
				this->hours++;
				if (this->hours == 24)
				{
					this->hours = 0;
				}
			}
		}
		return *this;
	}


	Time operator--()
	{
		this->seconds--;
		if (this->seconds == -1)
		{
			this->seconds = 59;
			this->minutes--;
			if (this->minutes ==-1)
			{
				this->minutes = 59;
				this->hours--;
				if (this->hours == -1)
				{
					this->hours = 23;
				}
			}
		}
			return *this;
	}


	Time operator++(int dummy)
	{
		Time oldTime = *this;
		++this->seconds;
		if (this->seconds == 60)
		{
			this->seconds = 0;
			this->minutes++;
			if (this->minutes == 60)
			{
				this->minutes = 0;
				this->hours++;
				if (this->hours == 24)
				{
					this->hours = 0;
				}
			}
		}
		return oldTime;
	}
	
	Time operator--(int dummy)
	{
		
		Time oldTime = *this;
		
		--this->seconds;
		
		if (this->seconds == -1)
		{
		
			this->seconds = 59;
			this->minutes--;
			
			if (this->minutes == -1)
			{
				this->minutes = 59;
				this->hours--;
				if (this->hours == -1)
				{
					this->hours = 23;
				}
			
			}
		
		}


		return oldTime;
	}


	bool operator+()const
	{

		if (this->hours >= 9 && this->hours <= 17)
		{
			
			
			if (this->hours == 17 )
				return(this->minutes == 0 && this->seconds == 0);



			else if (this->hours >= 9 && this->hours < 17)
				return (this->minutes >= 0&&this->minutes <= 59 && this->seconds >= 0 && this->seconds <= 59);
		}


		return false;
	}
};
int main()
{
	Time obj1(9, 0, 0), obj2(23, 59, 59);
	cout << +obj1<<endl;
	//cout << obj2++<<endl;
	cout << ++obj2 << endl;


	//cout << obj1 - obj2 << " seconds" << endl;
	
	return 0;
}