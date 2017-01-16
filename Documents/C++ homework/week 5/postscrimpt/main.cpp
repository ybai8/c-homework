#include <iostream>
#include<fstream>
#include<string>
using namespace std;

class Postscript {
private:
   ofstream aaa;
    string out;
public:
    Postscript(const char* s):out(s){

        aaa.open(s);
    }

    void line(int x1,int y1,int x2,int y2){
        aaa<<x1<<' '<<y1<<" move to "<<x2<<' '<<y2<<" lineto stroke";
    }
    void setColor(double red, double green, double blue){
        aaa<<red<<' '<<green<<' '<<blue<<' '<<"setrgbcolor";
    }
    void drawRect(int x,int y,int width,int height){
        aaa<<x<<' '<<y<<' '<<" move to "<<x+width<<' '<<y<<" lineto "<<x+width<<' '<<y+height
          <<" lineto "<<x<<' '<<y+height<<" lineto close path stroke";
    }
    void fillRect(int x,int y,int width,int height){
        aaa<<x<<' '<<y<<' '<<" move to "<<x+width<<' '<<y<<" lineto "<<x+width<<' '<<y+height
          <<" lineto "<<x<<' '<<y+height<<" lineto close path fill";
    }
    void drawCircle(int x,int y,int radius){
        aaa<<x<<' '<<y<<' '<<radius<<" 0 360 arc stroke";
    }
    void fillCircle(int x,int y,int radius){
        aaa<<x<<' '<<y<<' '<<radius<<" 0 360 arc fill";
    }




};

int main() {
    ofstream f("3.dat");
	Postscript p("test.ps");
	p.line(0,0, 100,100); // default color? black // 0 0 moveto 100 100 lineto stroke
	p.setColor(0.5, 0.0, 0.0); // [red=0.5 green=0 blue=0]  0.5 0 0 setrgbcolor

	// 200 300 moveto 250 300 lineto 250 650 lineto 200 650 lineto closepath stroke
	p.drawRect(200, 300, 50, 350); // x,y,width,height  

	// 200 300 moveto 250 300 lineto 250 650 lineto 200 650 lineto closepath fill
	p.fillRect(200, 300, 50, 350); // x,y,width,height 

	p.drawCircle(300, 300, 100); // x,y, radius      300 300 100 0 360 arc  stroke
	p.fillCircle(300, 300, 100); // x,y, radius      300 300 100 0 360 arc  fill

}
