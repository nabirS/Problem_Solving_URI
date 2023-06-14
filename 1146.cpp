#include<iostream>
using namespace std;

int main()
{
    int n,i;
    while(cin>>n)
    {
         if(n==0)
        {
            break;
        }
        else{
        for(i=1; i<n; i++)
        {
            cout<<i<< " ";
        }
        }
        cout<<n<<endl;
    }
    return 0;
}
