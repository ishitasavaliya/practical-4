#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int emp_id;
    string emp_name;

public:
    void getdata() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, emp_name);
    }

    void putdata() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
    }
};

int main() {
    const int numEmployees = 10;
    Employee employees[numEmployees];

    cout << "Enter details for at least 10 employees:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee #" << (i + 1) << endl;
        employees[i].getdata();
    }

    cout << "Employee details:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << "Details of Employee #" << (i + 1) << endl;
        employees[i].putdata();
        cout << endl;
    }

    return 0;
}

