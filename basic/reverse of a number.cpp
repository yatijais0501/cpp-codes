#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,rem;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    cout<<"reverse of the number is"<<endl<<reverse;
}