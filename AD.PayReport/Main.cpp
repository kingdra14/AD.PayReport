
#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};
Employee* GetEmployeeData()
{
    Employee* EmpData = new Employee;
    cout << "Enter The ID For Employee:  \n ";
    cin >> EmpData->ID;
    cout << "Enter The First Name For Employee :  \n ";
    cin >> EmpData->FirstName;
    cout << "Enter The Last Name For Employee :  \n ";
    cin >> EmpData->LastName;
    cout << "Enter The Hours Worked For Employee :  \n ";
    cin >> EmpData->HoursWorked;
    cout << "Enter The Hourly Rate For Employee :  \n ";
    cin >> EmpData->HourlyRate;

    return EmpData;
}
void PayReport(Employee* EmpData,int Num_Employees)
{
    cout << "Pay Report \n";
    cout << "--------- \n";
    for (int i = 0; i < Num_Employees; i++)
    cout << EmpData[i].ID << "." << EmpData[i].FirstName << " " <<
            EmpData[i].LastName << ": $" << EmpData[i].HoursWorked * EmpData[i].HourlyRate <<"\n";
}
void TotalPay(Employee* EmpData, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + (EmpData[i].HourlyRate * EmpData[i].HoursWorked);

    }
    cout <<"ToTal Pay: $" << sum;
}

int main()
{
    cout << "How many Employees would you like to Process? ";
    int Num_Employees = 0;
    cin >> Num_Employees;
    Employee* Empinfo = new Employee[Num_Employees];
    for (int i = 0; i < Num_Employees; i++)
    {
        Empinfo[i] = *GetEmployeeData();
    }
    PayReport(Empinfo, Num_Employees);

    cout << "\n";
    TotalPay(Empinfo, Num_Employees);

    delete[] Empinfo;

   
  
    (void)_getch();
    return 0;
}