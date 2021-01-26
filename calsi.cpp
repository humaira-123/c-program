#include<iostream>
using namespace std;
void cal(int,int);
int main()
{
    int a,b;
    cin>>a>>b;
    cal(a,b);
    return 0;
}
void cal(int a,int b)
{
    int c,d,e;
    float f;
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    cout<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f;
}
