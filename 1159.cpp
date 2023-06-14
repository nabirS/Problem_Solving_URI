#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j,x,sum,n;
    while(1)
    {
        j=0;
        sum=0;
        cin>>x;
        if(x==0)
        {
            break;
        }
         if(x%2==0)
        {
            while(j<=4)
            {
                sum+=x;
                x+=2;
                j++;
            }
        }
        else
        {
            x++;
            while(j<=4)
            {
                sum+=x;
                x+=2;
                j++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
