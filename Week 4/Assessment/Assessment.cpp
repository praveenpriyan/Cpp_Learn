#include <iostream>
#include <vector>
using namespace std;

class Employee {
protected:
    string name;

public:
    Employee(const string& name) : name(name) {}

    virtual ~Employee() {}

    virtual double calculatePay() const = 0;
    virtual void display() const = 0;
};

// Derived class for Hourly Employees
class HourlyEmployee : public Employee {
private:
    double hoursWorked;
    double hourlyRate;

public:
    HourlyEmployee(const string& name, double hoursWorked, double hourlyRate)
        : Employee(name), hoursWorked(hoursWorked), hourlyRate(hourlyRate) {}

    double calculatePay() const override {
        return hoursWorked * hourlyRate;
    }

    void display() const override {
        cout << "Hourly Employee: " << name << endl;
        cout << "Pay: " << calculatePay() << endl;
    }
};

// Derived class for Salaried Employees
class SalariedEmployee : public Employee {
private:
    double basePay;

public:
    SalariedEmployee(const string& name, double basePay)
        : Employee(name), basePay(basePay) {}

    double calculatePay() const override {
        return basePay;
    }

    void display() const override {
        cout << "Salaried Employee: " << name << endl;
        cout << "Pay: " << calculatePay() << endl;
    }
};

// Derived class for Commission Employees
class CommissionEmployee : public Employee {
private:
    double basePay;
    double salesAmount;
    double commissionRate;

public:
    CommissionEmployee(const string& name, double basePay, double salesAmount, double commissionRate)
        : Employee(name), basePay(basePay), salesAmount(salesAmount), commissionRate(commissionRate) {}

    double calculatePay() const override {
        return basePay + (salesAmount * commissionRate);
    }

    void display() const override {
        cout << "Commission Employee: " << name << endl;
        cout << "Pay: " << calculatePay() << endl;
    }
};

// Demonstration of message passing and polymorphism
int main() {
    vector<Employee*> employees;

    employees.push_back(new HourlyEmployee("John Doe", 40, 15));
    employees.push_back(new SalariedEmployee("Jane Smith", 3000));
    employees.push_back(new CommissionEmployee("Emily Davis", 1500, 10000, 0.05));

    for (Employee* employee : employees) {
        employee->display();
    }

    // Clean up
    for (Employee* employee : employees) {
        delete employee;
    }

    return 0;
}
