#include "iostream"
using namespace std;
class Faculty {
	int id;
	string firstname, lastname, qualification;
	float salary;
public:
	Faculty(int id,string firstname, string lastname, string qualification):id(id),firstname(firstname),lastname(lastname),qualification(qualification),salary(-1)
	{
		this->id = (id >= 1001 && id <= 1065) ? id : 0;
	}
	Faculty(int id, string firstname, string lastname, string qualification,float salary):id(id), firstname(firstname), lastname(lastname), qualification(qualification),salary(salary)
	{
		this->id = (id >= 1001 && id <= 1065) ? id : 0;
		this->salary = (salary >= 20000.00 && salary <= 100000.00) ? salary : -1;
	}
	Faculty(int id, string firstname, string qualification) :id(id), firstname(firstname), qualification(qualification), lastname(""), salary(-1)
	{
		this->id = (id >= 1001 && id <= 1065) ? id : 0;
	}
	Faculty(Faculty& fac) :id(fac.id), firstname(fac.firstname), lastname(fac.lastname), qualification(fac.qualification), salary(fac.salary)
	{

	}

	void setid(int id)
	{
		this->id = (id >= 1001 && id <= 1065) ? id : 0;
	}
	int getid() const
	{
		return id;
	}
	void setfname(string fistname)
	{
		this->firstname = firstname;
	}
	string getfname() const 
	{
		return firstname;
	}
	void setlname(string lastname)
	{
		this->lastname = lastname;
	}
	string getlname() const
	{
		return lastname;
	}
	void setqualification(string qualification)
	{
		this->qualification = qualification;
	}
	string getqualification() const 
	{
		return qualification;
	}
	void setsalary(float salary)
	{
		this->salary = (salary >= 20000.00 && salary <= 100000.00) ? salary : -1;
	}
	float getsalary() const
	{
		return salary;
	}
	void setMethods(int id, string firstname, string lastname, string qualification, float salary)
	{
		setid(id);
		this->firstname = firstname;
		this->lastname = lastname;
		this->qualification = qualification;
		setsalary(salary);
	}
	void read()
	{
		cout << "Enter id : ";
		cin >> id;
		cout << "Enter First name : ";
		cin >> firstname;
		cout << "Enter Last name : ";
		cin >> lastname;
		cout << "Enter qualification : ";
		cin >> qualification;
		cout << "Enter salary : ";
		cin >> salary; 
		setid(id);
		setsalary(salary);
	}
	void write() const
	{
		cout << "Id : " << id << "   First Name : " << firstname << "   Last Name : " << lastname << "   Qualifiaction : " << qualification << "   Salary : " << salary << endl;
	}
	bool isPostGraduate()
	{
		if (this->qualification == "MS" || this->qualification == "Ms" || this->qualification == "Phd" || this->qualification == "PhD" || this->qualification == "phd" || this->qualification == "PHD" || this->qualification == "ms")
			return true;
		return false;
	}
	float geTakehomeSalary()
	{
		float takehomeSalary;
		float tax;
		if (this->salary >= 20000)
		{
			tax = ((salary)/100) * 7;
			takehomeSalary = salary - tax;
			return takehomeSalary;
		}
		return -1;
	}
	bool isJoined()
	{
		return this->salary >= 20000.00;
	}
	~Faculty()
	{
		cout << "Destructor Executed " << endl;
	}
};
int main()
{
	Faculty f1(1045,"Safi","Bsc");
	f1.read();
	cout<<f1.isPostGraduate()<<endl;
	cout<<f1.isJoined()<<endl;
	cout<<f1.geTakehomeSalary()<<endl;
	f1.write();

	return 0;
}