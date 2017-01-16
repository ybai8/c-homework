#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(long long p){
    int i;
    int m=0;
    if(p==1)
    cout<<"false"<<'\n';

    if(p==2||p==3)
        cout<<"true"<<'\n';
if(p>3){
    for(i=2;i<=sqrt(p);i++){
        if(p%i==0)
             m++;

     }
        if(m==0)
            cout<<"true"<<'\n';
        else
            cout<<"false"<<'\n';
}
}

int main()
{
    long long a;
    long long b;
    for(b=1;b<1000;b++)
    {cout<<"Please input a number:";
    cin>>a;
    isPrime(a);}


}

