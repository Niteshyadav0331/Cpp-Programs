#include <iostream>
using namespace std;

int main()
{
    int v, u, a;
    float speed;

    cout <<"Enter 3 values: ";
    cin>>u>>v>>a;

    speed = (v*v - u*u)/(2*a);
    cout<<"Speed is "<<speed;

    return 0;
}