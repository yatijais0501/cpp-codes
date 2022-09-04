#include <iostream>
using namespace std;
int main()
{
    int i,n,marks[50]={0};//intialization for other spaces
    int arr[5]={3,4,5,6};
    cout<<arr[5]<<endl;
    cout<<"enter no of students";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>marks[i];
        marks[i]=marks[i]*5;//updation of the array
    }
    for(i=0;i<50;i++)
    {
        cout<<marks[i]<<" ,";
    }
    
}