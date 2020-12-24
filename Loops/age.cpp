#include <iostream>
using namespace std;

int main()
{
    int age, age1;

    cout<<"Enter Your Age: ";
    cin>>age;

    if(age >= 12 && age < 50)
    {
        cout<<"Young"<<endl;
    }
    else
    {
        cout<<"Not Young"<<endl;
    }

    cout<<"Enter your age again: ";
    cin>>age1;
    if(age1 <= 12 || age1 > 50)
    {
        cout<<"Eligible";
    }
    else
    {
        cout<<"Not Eligible";
    }
    

    return 0;
}