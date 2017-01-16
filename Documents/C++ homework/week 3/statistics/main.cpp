#include <iostream>
using namespace std;

float mmmv(float c[],int m){

    int i;
    float max=c[0],min=c[0],mean=0,varin=0;
    for(i=0;i<m-1;i++)
       { if(c[i]<c[i+1])
            max=c[i+1];
        if(c[i]>c[i+1])
            min=c[i+1];
    }
    for(i=0;i<m;i++)
    {mean+=c[i];}
        mean=mean/m;
    for(i=0;i<m;i++)
    {varin=varin+(c[i]-mean)*(c[i]-mean);}
    cout<<"max="<<max<<" min="<<min<<" mean="<<mean<<" variance="<<varin<<'\n';
    return 0;
}
int main()
{
    int n;
    float a[256];
    cout<<"Please input an integer:";
    cin>>n;
    for(int i=0;i<n;i++)
    {cout<<"Please input a float number:";
        cin>>a[i];}
    mmmv (a, n);
}

