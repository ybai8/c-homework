#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream f("2f.dat");
    if(!f.is_open())
    {cout<<"File cannot open"<<endl;}

    int n;
    f>>n;
    double a[n];
    for(int i=0;i<n;i++){

        f>>a[i];
    }
    double mean=0;
    for(int i=0;i<n;i++){
        mean+=a[i];
    }
    mean=mean/n;
    cout<<mean<<endl;
    return 0;


}
