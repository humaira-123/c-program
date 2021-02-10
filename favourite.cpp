#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--) //t is test case
    {
        int n,k=0,count=0; //n is no.  user are taken
        cin>>n;
        while (n!=0)
        {        
            k=n%10;
            if(k==5)
            {
                count++;
            }
        n=n/10;
        }

        cout<<count;
    }
    // int size=sizeof(a)/sizeof(a[0]);
    // cout<<size;
    // cout<<a[i]<<endl;
    // for(int j=0;j<t;j++)


}