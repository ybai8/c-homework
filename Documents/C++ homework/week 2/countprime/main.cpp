#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(long long p){
    int i;
    int m=0;
    if(p==1)
    return 0;

    if(p==2||p==3)
        return 1;
if(p>3){
    for(i=2;i<=sqrt(p);i++){
        if(p%i==0)
             m++;

     }
        if(m==0)
            return 1;
        else
            return 0;
}
}
int countPrimes(unsigned long long a,unsigned long long b){
    int count=0;
    unsigned long long num;
    for(num=a;num<=b;num++){
        
        if(isPrime(num)==1)
            count++;
        
    }
    cout<<count<<'\n';
}

int main()
{
    unsigned long long c;
    unsigned long long d;
    long long b;
    for(b=1;b<1000;b++)
    {cout<<"Please input 2 numbers:";
    cin>>c>>d;
    countPrimes(c,d);}


}
