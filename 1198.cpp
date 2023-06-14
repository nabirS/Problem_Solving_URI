#include<iostream>
#include<stdlib.h>
using namespace std;
int main()

{
    long long int x,y,diff,t;
    while(cin>>x>>y)
    {
        if(y>x)
        {
            t=y;
            y=x;
            x=t;
        }
        diff=x-y;
        cout<<diff<<endl;
    }
    return 0;
}
