#include <iostream>
#include <climits>
using namespace std;

int main()
{
    char x = 127;
    char y = 128;
    char z = -128;
    int a = INT_MAX;

    cout<<(int)x<<endl;
    cout<<(int)y<<endl;

    x++;

    cout<<"After incriminting x "<<int(x)<<endl;

    z--;

    cout<<"After decrementing z "<<int(z)<<endl;

    cout<<a<<endl;

    a++;

    cout<<"After incrementing a "<<a<<endl;

    return 0;
}