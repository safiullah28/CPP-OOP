#include "iostream"
using namespace std;

class Driver {
protected:
	float hourly_pay;
	float weight;
public:
	virtual void initialize(float hourly_pay,float weight)
	{
		this->hourly_pay = hourly_pay;
		this->weight = weight;
	}
	float cost_per_mile()
	{
		return hourly_pay / 55.0f;
	}
	float drivers_weight()
	{
		return weight;
	}
};
class MovingVan {
protected:
	float payload;
	float mpg;
public:
	void initialize(float payload, float mpg)
	{
		this->payload = payload;
		this->mpg = mpg;
	}
	float efficiency(float weight)
	{
		return this->payload / (this->payload + weight);
	}
	float cost_per_ton(float fuel_cost)
	{
		return fuel_cost / (2000.0f);
	}
};
class Driven_Truck :public MovingVan,public Driver{
public:
	void initialize(float payload, float mpg, float hourly_pay, float weight)
	{
		this->payload = payload;
		this->mpg = mpg;
		this->Driver::hourly_pay = hourly_pay;
		this->Driver::weight = weight;
	}
	float cost_per_full_day(float cost_of_gas)
	{
		return ((8 * this->Driver::hourly_pay) + (8 * cost_of_gas) * 55.0) / this->mpg;
	}
	float total_weight()
	{
		return this->Driver::weight + this->payload;
	}

};
int main()
{
	Driven_Truck chuck_ford;
	chuck_ford.initialize(200, 12, 40, 40);
	chuck_ford.Driver::initialize(12, 50);
	cout<<"Efficiency : "<<chuck_ford.efficiency(45)<<endl;
	cout<<"Cost per Mile : "<<chuck_ford.cost_per_mile()<<endl;
	cout << "Cost per full day : " << chuck_ford.cost_per_full_day(240) << endl;
	cout << "Total weight : " << chuck_ford.total_weight() << endl;
	return 0;
}