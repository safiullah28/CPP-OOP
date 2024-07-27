#include "iostream"
using namespace std;
class Rational {
	int numerator;
	int denominator;
public:
	Rational(int numerator, int denominator) :numerator(numerator), denominator(denominator)
	{
		denominator = (denominator > 0) ? denominator : 1;
	}
	Rational(int numerator):numerator(numerator)
	{}
	void setnum(int numerator)
	{
		this->numerator = numerator;
	}
	void setdenom(int denominator)
	{
		denominator = (denominator > 0) ? denominator : 1;
	}

	friend istream& operator>> (istream& input, Rational& obj)
	{
		cout << "Enter a = ";
		input >> obj.numerator;

		cout << "Enter b = ";
		input >> obj.denominator;

		return input;
	}
	friend ostream& operator<< (ostream&, const Rational&);
	Rational operator+(const Rational& obj)
	{
		return Rational(this->numerator + obj.numerator, this->denominator + obj.denominator);
	}
	Rational operator-(const Rational& obj)
	{
		return Rational(this->numerator - obj.numerator, this->denominator - obj.denominator);
	}
	Rational operator*(const Rational& obj)
	{
		return Rational(this->numerator * obj.numerator, this->denominator * obj.denominator);
	}
	Rational operator/(const Rational& obj)
	{
		return Rational(this->numerator / obj.numerator, this->denominator / obj.denominator);
	}
	bool operator>(const Rational& obj)
	{
		return ((this->numerator > obj.numerator) && (this->denominator > obj.denominator));
	}
	bool operator==(const Rational& obj)
	{
		return ((this->numerator == obj.numerator) && (this->denominator == obj.denominator));
	}
	bool operator<(const Rational& obj)
	{
		return ((this->numerator < obj.numerator) && (this->denominator < obj.denominator));
	}
	Rational operator-()
	{
		return Rational(-(this->numerator),this->denominator);
	}
	bool operator!()
	{
		if (-(this->numerator))
			return true;
		return false;
	}
};
ostream& operator<< (ostream& output, const Rational& obj)
{
	output << obj.numerator << " / " << obj.denominator << endl;
	return output;
}
int main()
{
	Rational num1(-2, 5),num2(4,5);
	cout << !num2;
	return 0;
}