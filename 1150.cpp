#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int x,z,i,sum=0,j=0;
    cin>>x;
    while(1)
    {
        cin>>z;
        if(z>x)
        {
            break;
        }
    }

    while(x<=z)
    {

        sum+=x;
        if(sum<z)
        {
            j++;
        }
        x++;
    }
    cout<<j+1<<endl;

    return 0;

}
