#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,sum=0;
    float ave,k=0;
    while(1)
    {
        cin>>n;
        if(n<0)
        {
            break;
        }
        else
        {
            sum+=n;
            k++;
        }
    }
    ave=sum/k;
    cout<<fixed<<setprecision(2)<<ave<<endl;
    return 0;
}
