#include "iostream"
using namespace std;
class Package {
private:
	string sender, reciever;
	string address_sender, address_reciever;
	string city_sender, city_reciever;
	float weight;
	float costperOunce;
public:
	Package(string sender, string reciever,
		string address_sender, string address_reciever,
		string city_sender, string city_reciever,
		float weight, float costperOunce)
	:sender(sender),reciever(reciever),
		address_sender(address_sender),address_reciever(address_reciever),
		weight(weight),costperOunce(costperOunce)
	{
		this->weight = (weight >= 0.0) ? weight : 1;
		this->costperOunce = (costperOunce >= 0.0) ? costperOunce : 1;
	}
	float calculateCost()
	{
		return weight * costperOunce;
	}
};
class TwoPackage : public Package{
private:
	float flatFee;
public:
	TwoPackage(float flatFee, string sender, string reciever,
		string address_sender, string address_reciever,
		string city_sender, string city_reciever,
		float weight, float costperOunce)
		:Package(sender, reciever,
			address_sender, address_reciever,
			city_sender,city_reciever,
			weight, costperOunce)
	{
		this->flatFee = (flatFee >= 0.0) ? flatFee : 1;
	}
	float calculateCost()
	{
		return this->flatFee+(this->calculateCost);
	}

};
class OvernightPackage : public TwoPackage
{
private:
	float feeperOunce;
public:
	OvernightPackage(float feeperOunce, float flatFee, string sender, string reciever,
		string address_sender, string address_reciever,
		string city_sender, string city_reciever,
		float weight, float costperOunce):feeperOunce(feeperOunce),TwoPackage(flatFee, sender, reciever,
			address_sender, address_reciever,
			city_sender, city_reciever,
			weight, costperOunce),Package(sender, reciever,
				address_sender, address_reciever,
				city_sender, city_reciever,
				weight, costperOunce)
	{}
	float calculateCost()
	{
		return this->feeperOunce + (this->calculateCost());
	}

}
int main()
{
	Package p1("Safi", "Fatima", "Punjab University", "Muslim Town", 22.1f, 4.4);
	cout << "Cost : " << p1.calculateCost();
	return 0;
}