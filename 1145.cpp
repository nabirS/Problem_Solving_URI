#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x,y,t=1,i=1;
    cin>>x>>y;
   while(i<=y){
        if(t==x)
        {
            cout<<i<< "\n";
            t=1;
        }
        else
        {
            cout<<i<< " ";
            t++;
        }
        i++;
   }
   return 0;
}


