#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    org=n;
    
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<count;
}