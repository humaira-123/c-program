#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,count,t;
    int index=0;
    cin>>n>>m;
    int a[n][m],b[n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" "; //2-d array print
        }
    cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                count++; // number of 1's in each row
            }
        }
        b[i]=count;
    
        cout<<b[i]<<" ";// no. of 1's in each row
    }
    cout<<endl;
    t=*max_element(b,b+n); //maximum element in an 1-d array
    cout<<endl;
   cout<< "search result = " <<binary_search(b,b+n,t)<<endl; //element present or not in array
   for(int i=0;i<n;i++)
   {
       if(b[i]==t)
       {
           index=i;//maximum element present in which index
           break;
       }

   }
   cout<<"index output maximux no. 1, row = "<<index;
}