#include<iostream>
using namespace std;
int main()
{   
    int h,min;//hour
    cin>>h; //h=hour //m=minute
    float hr,m,angle; //hr_angle=(h+m/60)*360/12
    cin>>m;
    hr=(h+m/60)*30;
    min=m*6; //min_angle=m*6
    angle=min-hr; //angle between hour and minute
    cout<<endl;
    cout<<angle<<"angle between minute and hour";
    return 0;
}