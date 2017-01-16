#include <iostream>
#include<iomanip>
using namespace std;

float arr(float a[256][256], int row1, int col1){

cout<<"Please input a "<<row1<<"*"<<col1<<"matrix:"<<'\n';
for(int i=0;i<row1;i++)
    for(int j=0;j<col1;j++)
    {
        cin>>a[i][j];
    }
return 0;
}
float plusarr(float c[256][256], int row2, int col2){

    for(int i2=0;i2<row2;i2++)
        for(int j2=0;j2<col2;j2++)
           { c[i2][col2]+=c[i2][j2];
    c[row2][j2]+=c[i2][j2];
        }
    for(int i2=0;i2<row2;i2++)
        c[row2][col2]+=c[i2][col2];
    for(int i2=0;i2<=row2;i2++)
    {for(int j2=0;j2<=col2;j2++)
        {
            cout<<setiosflags(ios::fixed)<<setprecision(1)<<c[i2][j2]<<'\t';
        }cout<<'\n';}

     return 0;
}

int main()
{
    float b[256][256];
    int a,c;
    cout<<"Please input row and column of matrix:";
    cin>>a>>c;
    arr(b, a, c);
    plusarr(b, a, c);
}

