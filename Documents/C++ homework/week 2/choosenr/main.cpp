#include<iostream>
using namespace std;

double choose(unsigned int n, unsigned int r){
    long long i,p,q;
    double a=1,b=1,c=1;
    double ans;
    for(i=1;i<=n;i++)
    a*=i;
    for(p=1;p<=r;p++)
    b*=p;
    for(q=1;q<=n-r;q++)
    c*=q;
    ans=a/(b*c);
    cout<<ans<<'\n';

}
int main(){
    unsigned int y,z,g;
    for(g=1;g<10000;g++)
   { cout<<"Please input 2 numbers:";
    cin>>y>>z;
    choose(y,z);}
    return 0;

}
