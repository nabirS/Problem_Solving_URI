#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    int long long i,j,n,m,R,B,C,x,y;
    cin>>n;
    for(i=1; i<=n; i++)
    {
       cin>>x>>y;
       R=pow((3*x),2)+pow(y,2);
       B=2*pow(x,2)+pow((5*y),2);
       C=-(100*x)+pow(y,3);
       if(B<=R && C<=R)
       {
           cout<< "Rafael ganhou"<<endl;
       }
        else if(R<=B && C<=B)
       {
           cout<< "Beto ganhou"<<endl;
       }
       else//(R<=C && B<=C)
       {
           cout<< "Carlos ganhou"<<endl;
       }

    }
    return 0;

}

