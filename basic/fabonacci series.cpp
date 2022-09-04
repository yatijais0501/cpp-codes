//fabonacci series
#include<iostream>
using namespace std;
int main()
{
    int n,f=0,t=1,ft;
    cin>>n;
    ft=f+t;
    cout<<f<<endl;
    cout<<t<<endl;
    cout<<ft<<endl;
    while(ft<n)
    {
        f=t;
        t=ft;
        ft=f+t;
        cout<<ft<<endl;
    }
}