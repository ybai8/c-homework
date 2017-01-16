#include <iostream>
#include <fstream>
using namespace std;
class Matrix {

public:
    Matrix(int val,  int s[]) {

        int q=0,b;
        for (int i = 0; i < val; i++)
        {q=q+s[i];}
        b=q/val;
        cout<<b;
    }
	// this destructor is optional.  This is the default anyway.

};
int main(){
    ofstream("2f.dat");
    int n,i=0;
    cout<<"Please input an integer:";
    cin>>n;
    cout<<"Please input 3 numbers:";
    int c[i];
    for(i=0;i<n;i++)
        cin>>c[i];
    Matrix(n,c);


}
