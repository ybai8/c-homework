#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Shape{
private:
    Line L1;
    Rect R1;
    Circle C1;
public:

    virtual void draw(string& s) = 0;
};
class Circle {
private:
    double x;
    double y;
    double radius;
    ofstream out;
    // x,y, radius
public:
    Circle(double x,double y, double radius):x(x),y(y),radius(radius){}
    void draw(string s):out(s){

        out<<x+' '+y+' '+radius+' '+"0 360 arc stroke";

    }

};

class Rect {
private:
    double x;
    double y;
    double w;
    double h;
    ofstream out;
    // x,y, w, h
public:
    Rect(double x,double y,double w,double h):x(x),y(y),w(w),h(h){}
    void draw(string s):out(s){

        out<<x+' '+y+" move to "+x+w+' '+y+" line to "+(x+w)+' '+y+h+
              " line to "+x+' '+(y+h)+" line to close path stroke";

    }

};

class Line {
private:
    double x1;
    double y1;
    double x2;
    double y2;
    ofstream out;
    string i;
    // x1,y1,x2,y2
public:
    Line(double x1,double y1,double x2,double y2):x1(x1),y1(y1),x2(x2),y2(y2){}
    void draw(const char* s) :i(s){
        out.open(i);
        out<<x1+' '+y1+" move to "+x2+' '+y2+" line to stroke";

    }
};

int main() {
    string s;
    Line L1(0,0, 100, 100);
    L1.draw(s);
    Rect r1(300,400, 50, 100);
    r1.draw(s);
    Circle c1(200,100, 150);
    c1.draw(s);

    Shape* shapes[3] = {
            &L1, &r1, &c1
        };

        for (int i= 0; i < 3; i++)
           { shapes[i].draw(s);

        cout << s << '\n';}

}
