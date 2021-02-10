#include<iostream>
using namespace std;
int main()
{
    int n,b;
    cin>>n>>b;
    int a[b]={0};
    for(int i=1;i<=b;i++)
    {
        if(n%i==0)
        {
            a[b]=i;
        }
    }
    cout<<a[b];
}