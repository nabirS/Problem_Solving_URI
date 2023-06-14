#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,k,s,n,a,b,t,u,v;
    double c,d;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        j=0;
        cin>>a>>b>>c>>d;
        while(a<=b)
        {
            a*=(1+c/100.0);

            b*=(1+d/100.0);
            j++;

            if(j>100)
                {
                    cout<< "Mais de 1 seculo."<<endl;
                    break;
                }
        }
        if(j<=100)
        {
            cout<<j<< " "<< "anos."<<endl;

        }

    }

   return 0;
}
