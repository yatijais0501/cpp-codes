#include <iostream>
using namespace std;
int main()
{
    int n,factorial=1;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n!=0)
    {
        factorial=factorial*n;
        n-=1;
    }
    cout<<"the factorial of the number is "<<factorial;
}