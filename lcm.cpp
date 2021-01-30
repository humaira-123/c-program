
#include<iostream>
using namespace std;
void lcm(int n,int m)
{   
    int i=1;
    while(n*m>0)
    {   
        if (i%n==0 && i%m==0)
        {
            break;
        }
        i++;
    }
    cout<<i;
}
int main()
{
    int n,m;
    cin>>n>>m;
    lcm(n,m);
    return 0;
}

