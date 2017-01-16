#include <iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

class Bitmap{
private:
    int i;
    int j;
    int x;
   int y;
   int a[20][20];
    ofstream out;
public:
    Bitmap(int x=0,int y=0):x(x),y(y){

        out.open("2f.dat");
        for(i=0;i<=x;i++)
        for(j=0;j<=y;j++)
                    a[i][j]=0;

    }

    void lines(int m,int n,int p){
        for(i=m,j=n;j<=p;j++)
        {a[i][j]=1;}

    }
    void rectangles(int l1,int l2,int c1,int c2){
        for(i=l1;i<l2;i++)
        for(j=c1;j<c2;j++)
            {a[i][j]=1;}


    }
   void print(){

       for(i=0;i<x;i++)
       {{for(j=0;j<y;j++)
               out<<a[i][j];}
       out<<'\n';}
   }

};







int main()
{

      Bitmap map(20,20);

      map.lines(5,1,5);
      map.rectangles(6,9,3,7);
      map.print();

    }




