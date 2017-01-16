#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;


float robotlocation(float e, float f){
    const double pi=3.1415926535;
    float x=0,y=0;
    for(int i=0;i<10000;i++)
    {
    cout<<"Please input angle and distance:";
    cin>>e>>f;
    if(e>0||f>0)
    {
        x+=f*sin(e*pi/180);
        y+=f*cos(e*pi/180);
        cout<<setiosflags(ios::fixed)<<setprecision(4)<<x<<' '<<y<<'\n';
    }
    else
    {cout<<"Program terminates."<<'\n';
    break;}
    }
    return 0;
}

int main()
{
    float c,d;
    robotlocation(c,d);
}

