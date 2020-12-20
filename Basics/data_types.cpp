# include <iostream>
# include <climits>

using namespace std;

int main()
{
    char x;
    int y;
    float z;
    long a;
    double b;
    long double c;

    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;
    cout<<sizeof(z)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;

    cout<<CHAR_MIN<<" "<<CHAR_MAX<<endl;
    return 0;
} 
