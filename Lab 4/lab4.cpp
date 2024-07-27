#include <iostream>
#include<string>
using namespace std;
class Bus {
private:
	string Busnumber;
	string owner;
	int capacity;
public:
	Bus(string Busnumber, string owner)
	{
		this->Busnumber = Busnumber;
		this->owner = owner;
		capacity = 0;
	}
	Bus(Bus& obj)
	{
		obj.Busnumber = Busnumber;
		obj.owner = owner;
		obj.capacity = capacity;
	}
	~Bus()
	{
		cout << "Destructor executed ";
	}
	void setBusnumber(string Busnumber) {
		this->Busnumber = Busnumber;
	}
	string getBusnumber() {
		return Busnumber;
	}
	void setowner(string owner) {
		this->owner = owner;
	}
	string getowner() {
		return owner;
	}
	void setcapacity(int capacity) {
		this->capacity = capacity;
	}
	int getcapacity() {
		return capacity;
	}
	void setBus(string BusNumber,string owner,int capacity) {
		this->Busnumber = BusNumber;
		this->owner = owner;
		this->capacity = capacity;
	}
	void getBus()
	{
		cout << "Enter Bus number : ";
		getline(cin, Busnumber);
		cout << "Enter Bus Owner's name : ";
		getline(cin, owner);
		cout << "Enter Seating capacity of Bus : ";
		cin >> capacity;
	}
	void putBus()
	{
		cout << Busnumber << "\t\t\t" << owner << "\t\t\t" << capacity << endl;
	}
	void book()
	{
		capacity += 1;
	}
	void cancel()
	{
		capacity -= 1;
	}
};
int main()
{
	Bus b1("","");
	return 0;

}