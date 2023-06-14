#include<iostream>
#include<stdlib.h>
 using namespace std;

 int main()
 {
     int i,x,y,sum=0,t;
     cin>>x>>y;
     if(y<x)
     {
         t=x;
         x=y;
         y=t;
     }
     for(i=x; i<=y; i++)
     {
         if(i%13!=0)
         {
             sum+=i;
         }
     }
     cout<<sum<<endl;
 }
