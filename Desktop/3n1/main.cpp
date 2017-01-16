#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please input a number:";
   cin>>n;
   cout<<n<<" ";
   if(n<1)
       cout<<"This is a wrong number";
   if(n==1)
       cout<<n;
   while(n>1)
   {
       if(n%2==1)
          { n=3*n+1;
       cout<<n<<" ";}
       else
           {n=n/2;
           cout<<n<<" ";}
   }

       return 0;

}

