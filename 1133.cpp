#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int x,y,i,t,num;
    cin>>x>>y;
    if(x>y)
    {
        t=x;
        x=y;
        y=t;
    }
    for(i=x+1; i<y; i++)
    {
        num=i%5;
        if(num==2 || num==3)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
