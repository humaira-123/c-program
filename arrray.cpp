#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],r=0,l=n-1,b[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[r]=0;
            r++;
        }
        else if(a[i]==1)
        {
            b[l]=1;
            l--;
        }
        
    }
    for(i=0;i<n;i++)
    {
    cout<<b[i]<<" ";
    }
}