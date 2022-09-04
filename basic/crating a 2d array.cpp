#include<iostream>
using namespace std;
int main()
{
    int a[20][30];
    int m,n,i,j;
    cout<<"enter no of rows";
    cin>>m;
    cout<<"enter no of coloumns";
    cin>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<'\n';
    }
   
}
