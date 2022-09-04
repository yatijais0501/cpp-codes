#include<iostream>
using namespace std;
int main()
{
    int n, a , rev=0, rem;
    cout<<"enter a number"<<endl;
    cin>>n;
    a=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(a==rev)
    {
        cout<<"it's a palindrome";
    }
    else
    {
        cout<<"bad luck..not palindrome";
    }
}