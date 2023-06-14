#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,j=1,i=1;
    cin>>n;

   while(i<=n){
       cout<<j<< " "<<j+1<< " "<<j+2<< " PUM"<<endl;
       j=j+4;
       i++;
   }
   return 0;
}
