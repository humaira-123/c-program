#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i==j || j==k || k==i)
                {
                    continue;
                }
                if(a[i]==a[j]+a[k])
                {
                    s.insert(a[i]);
                    break;
                }
            }
        }
    }
    set<int>:: iterator itr;

    for(itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }
}