#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;
int main()

{
    int a[11000], n,i,total,Csum=0,Ssum=0,Rsum=0;
    float c,r,s;
    char b[10000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0; i<n; i++)
    {

        if(b[i]=='C')
        {
           Csum+=a[i];
        }
        else if(b[i]=='R')
        {
            Rsum+=a[i];
        }
        else if(b[i]=='S')
        {
            Ssum+=a[i];
        }
    }
    total=Csum+Rsum+Ssum;
    c=(100.00*Csum)/total;
    r=(100.00*Rsum)/total;
    s=(100.00*Ssum)/total;
    cout<< setprecision(2)<< fixed;
    cout<< "Total: "<<total<< " cobaias"<<endl;
    cout<< "Total de coelhos: "<<Csum<<endl;
    cout<< "Total de ratos: "<<Rsum<<endl;
    cout<< "Total de sapos: "<<Ssum<<endl;
    cout<< "Percentual de coelhos: "<<c<< " %"<<endl;
    cout<< "Percentual de ratos: "<<r<< " %"<<endl;
    cout<< "Percentual de sapos: "<<s<< " %"<<endl;
    return 0;

}
