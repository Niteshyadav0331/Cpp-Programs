#include <iostream>
using namespace std;

int main()
{
    // declaration and initialization of variables

    int a = 10;
    int b = 010;
    int c = 0x10;
    int d(10);
    int e = (20);
    int f{30};
    int g = {40};
    char h = 'A';
    char i = 65;
    char j = 0x41;
    char k = 65.5;
    float l = 123.56;
    float m = 123e2;
    float n = 123e-2f; // use f for floats variables
    string o = "Hello";

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    cout<<g<<endl;
    cout<<h<<endl;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout << l << endl;
    cout<<m<<endl;
    cout<<n<<endl;
    cout<<o<<endl;

    return 0;
}