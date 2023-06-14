#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x,y,sum,i,n,j,k=1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum=0;
        cin>>x>>y;
        if(x%2==0)
        {
            x=x+1;
            for(j=1; j<=y; j++)
            {
                sum+=x;
                x=x+2;
            }
        }
        else
        {
            for(j=1; j<=y; j++)
            {
                sum+=x;
                x=x+2;
            }
        }
        cout<<sum<<endl;
    }
    return 0;

}
