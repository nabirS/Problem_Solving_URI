#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main()
{

    float i,j;
    for(i=0; i<=2.2; i=i+0.2)
    {
        for(j=1; j<=3; j=j+1)
        {
            cout<< "I="<<i<< " "<< "J="<<j+i<<endl;
        }
    }
    return 0;
}
