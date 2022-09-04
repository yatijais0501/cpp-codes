#include<iostream>
using namespace std;
int main()
{
    int n,num,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0)
    {
        num=n%10;
        sum=sum+num;
        n/=10;
    }
    cout<<"sum of number"<<endl<<sum;
}