#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double i,s=1,j;
    for(i=3,j=2; i<=39; i=i+2,j=j*2)
    {
        s=s+i/j;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
