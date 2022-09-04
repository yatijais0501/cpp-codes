#include<iostream>
using namespace std;
int main()
{
    int n,i;
    bool is_prime;
    cin>>n;
    for(i=2;i=n/2;i++)
    {
        if(n%i==0){
           is_prime=false;
           break;
          
        }
        
    }
    if (is_prime)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
}
