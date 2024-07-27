#include <iostream>
#include <string>
using namespace std;

class NumDays {
private:
    double hours;

public:
    // Constructor
    NumDays(double h = 0) : hours(h) {}

    // Getter for hours
    double getHours() const {
        return hours;
    }

    // Setter for hours
    void setHours(double h) {
        hours = h;
    }

    // Getter for days
    double getDays() const {
        return hours / 8.0;
    }

    // Overloaded addition operator
    NumDays operator+(const NumDays& rhs) const {
        return NumDays(hours + rhs.hours);
    }

    // Overloaded subtraction operator
    NumDays operator-(const NumDays& rhs) const {
        return NumDays(hours - rhs.hours);
    }

    // Prefix increment operator
    NumDays& operator++() {
        ++hours;
        return *this;
    }

    // Postfix increment operator
    NumDays operator++(int) {
        NumDays temp = *this;
        hours++;
        return temp;
    }

    // Prefix decrement operator
    NumDays& operator--() {
        --hours;
        return *this;
    }

    // Postfix decrement operator
    NumDays operator--(int) {
        NumDays temp = *this;
        hours--;
        return temp;
    }
};



class TimeOff {
private:
    string employeeName;
    int employeeID;
    NumDays maxSickDays;
    NumDays sickTaken;
    NumDays maxVacation;
    NumDays vacTaken;
    NumDays maxUnpaid;
    NumDays unpaidTaken;

public:
    // Constructor
    TimeOff(string name, int id, double maxSickHours, double maxVacHours, double maxUnpaidHours)
        : employeeName(name), employeeID(id), maxSickDays(maxSickHours), maxVacation(maxVacHours), maxUnpaid(maxUnpaidHours) {}

    // Setters and getters for employee details
    void setEmployeeName(string name) {
        employeeName = name;
    }

    string getEmployeeName() const {
        return employeeName;
    }

    void setEmployeeID(int id) {
        employeeID = id;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    // Setters and getters for leave details
    void setMaxSickDays(double hours) {
        maxSickDays.setHours(hours);
    }

    double getMaxSickDays() const {
        return maxSickDays.getDays();
    }

    void setSickTaken(double hours) {
        sickTaken.setHours(hours);
    }

    double getSickTaken() const {
        return sickTaken.getDays();
    }

    void setMaxVacation(double hours) {
        if (hours <= 240) {
            maxVacation.setHours(hours);
        }
        else {
            maxVacation.setHours(240); // Enforce company policy
        }
    }

    double getMaxVacation() const {
        return maxVacation.getDays();
    }

    void setVacTaken(double hours) {
        vacTaken.setHours(hours);
    }

    double getVacTaken() const {
        return vacTaken.getDays();
    }

    void setMaxUnpaid(double hours) {
        maxUnpaid.setHours(hours);
    }

    double getMaxUnpaid() const {
        return maxUnpaid.getDays();
    }

    void setUnpaidTaken(double hours) {
        unpaidTaken.setHours(hours);
    }

    double getUnpaidTaken() const {
        return unpaidTaken.getDays();
    }
};

int main() {
    string name;
    int id, monthsWorked;
    double maxSickHours, maxVacHours, maxUnpaidHours;

    // Assume some initial values for demonstration
    maxSickHours = 0;
    maxVacHours = 0;
    maxUnpaidHours = 0;

    cout << "Enter the employee's name: ";
    cin >> name;
    cout << "Enter the employee's ID: ";
    cin >> id;
    cout << "Enter the number of months the employee has worked: ";
    cin >> monthsWorked;

    // Calculate maximum sick and vacation hours based on months worked
    maxSickHours = monthsWorked * 8;
    maxVacHours = monthsWorked * 12;

    // Initialize the TimeOff object
    TimeOff employee(name, id, maxSickHours, maxVacHours, maxUnpaidHours);

    // Display the employee's maximum number of sick leave and vacation days
    cout << "Employee Name: " << employee.getEmployeeName() << endl;
    cout << "Employee ID: " << employee.getEmployeeID() << endl;
    cout << "Maximum Sick Leave Days: " << employee.getMaxSickDays() << endl;
    cout << "Maximum Vacation Days: " << employee.getMaxVacation() << endl;

    return 0;
}
