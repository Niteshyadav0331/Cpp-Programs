#include <iostream>
using namespace std;

int main()
{
    int roll_no;

    cout<<"Enter  Your Roll No: ";
    cin>>roll_no;


    if(roll_no < 1)
    {
        cout<<"Invalid Roll No";
    }
    else
    {
        cout<<"Valid Roll No";
    }
    

    return 0;
}