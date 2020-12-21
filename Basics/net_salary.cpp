#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float basic, percent_allow, percent_deduct, net_salary;
    
    cout<<"Enter Basic Salary: ";
    cin>>basic;

    cout<<"Enter Percent of Allowences: ";
    cin>>percent_allow;

    cout<<"Enter Percent of Deductions: ";
    cin>>percent_deduct;

    net_salary = basic + basic * percent_allow / 100  - basic * percent_deduct / 100;

    cout<<"Net Salary is: "<<net_salary<<endl; 

    return 0;
}