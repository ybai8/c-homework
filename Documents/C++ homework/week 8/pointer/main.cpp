#include<iostream>
using namespace std;
int main() {
    // create an array of n elements
    int n;
    cin >> n;
    int a[n];

    // write 0 to all the elements as an array a[i]
    for(int i=0;i<n;i++)
       { a[i]=0;
    // print it out
        cout<<a[i];}
    // write 1 to all the elements using a pointer
      for(int* q=a;q<a+n;q++)
      {*q=1;
    // print it out using a pointer
          cout<<*q;}
    int* p = a;
    for (int count = n; count > 0; count--, p++)
    {*p = count;

    // what will this do?

    // print it out using a pointer!
        cout<<*p;}
    // print it out backwards using a pointer!
    for(int* m=a+n-1;m>=a;m--)
    {cout<<*m;}
    p = a;
    for (int count = n-1; count > 0; count-=2, p++)
    {*p = count;
        cout<<*p;}
    //print it out

    p = a +9;
    for (int count = 5; count < n+5; count++, p--)
        *p = count;


}
