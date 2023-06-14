#include<iostream>
using namespace std;

int main()
{
    int n,i,t=0,t1=1,next;
    cin>>n;
    for(i=0; i<n-1; i++)
    {
        if(i==0)
        {
            cout<< t<< " ";
        }
        else if(i==1)
        {
            cout<< t1<< " ";
        }
        else
        {
             next=t+t1;
             t=t1;
             t1=next;
             cout<<next<< " ";
        }
    }
             next=t+t1;
             t=t1;
             t1=next;
             cout<<next<<endl;
             return 0;

}
