#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,j=1,i=1,k=1,l=1;
    cin>>n;

   while(i<=n){

       cout<<j<< " "<<k<< " "<<l<<endl;
       cout<<j<< " "<<k+1<< " "<<l+1<<endl;
        j=j+1;
       k=j*j;
       l=j*j*j;
       i++;
   }
   return 0;
}


