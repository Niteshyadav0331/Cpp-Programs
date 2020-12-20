#include <iostream>
using namespace std;

int main()
{
    float r, area, area1;
    cout<<"Enter Radius: ";
    cin>>r;
    area = 3.1425f*r*r;
    cout<<"Area is : "<<area<<endl;
    area1 = (float)22/7 * r* r;
    cout<<"Area is : "<<area1<<endl;

    return 0;
}