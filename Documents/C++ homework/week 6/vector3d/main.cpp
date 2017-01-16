#include<iostream>
#include<cmath>
#include<istream>
using namespace std;

class Vector3d {
private:
    double x;
    double y;
    double z;
    static int count;
public:
    Vector3d(double x=0,double y=0,double z=0):x(x),y(y),z(z){
        count++;
    }
    friend Vector3d operator +(Vector3d a,Vector3d b){
        Vector3d ans(a.x+b.x,a.y+b.y,a.z+b.z);

        return ans;
    }
    friend Vector3d operator -(Vector3d a,Vector3d b){
        Vector3d ans(a.x-b.x,a.y-b.y,a.z-b.z);

        return ans;
    }
    friend Vector3d operator -(Vector3d a){
        Vector3d ans(-a.x,-a.y,-a.z);

        return ans;
    }
friend double operator *(Vector3d a,Vector3d b){
    double res=a.x*b.x+a.y*b.y;

    return res;
}
friend ostream& operator <<(ostream& s,Vector3d a){
    s<<a.x<<' '<<a.y<<' '<<a.z<<'\n';
    return s;
}
friend istream& operator >>(istream& s,Vector3d &a){
    s>>a.x>>a.y>>a.z;
    return s;
}

friend double dot(Vector3d a,Vector3d b){
    double res;
    res=sqrt(a.y*b.z-a.z*b.y+a.z*b.x-a.x*b.z+a.x*b.y-a.y*b.x);

    cout<<res<<'\n';
    return 0;
}
double dot(Vector3d b){
    double res;

    res=sqrt(y*b.z-z*b.y+z*b.x-x*b.z+x*b.y-y*b.x);
    cout<<res<<'\n';
    return res;

}
static double dot(Vector3d a,Vector3d b){

    double i=a.y*b.z-a.z*b.y+a.z*b.x-a.x*b.z+a.x*b.y-a.y*b.x;
    cout<<i<<'\n';
    return 0;
}
double mag(){
   double m=sqrt(x*x+y*y+z*z);

   cout<<m<<'\n';
   return 0;
}
double magsq(){
    double l=x*x+y*y+z*z;

    cout<<l<<'\n';
    return 0;
}
static int getcount(){
    return count;
}
};
int Vector3d::count=0;
int main() {
    Vector3d a(1,0,0);
    Vector3d b(2.5,0.5,-1.5);
    Vector3d c = a + b; // addition     friend
    Vector3d d = a - b; // subtraction
    Vector3d e = -c; // negation
    Vector3d f; // (0,0,0)

    cin >> f; // read in vector from keyboard 1.5 2.5 0
  cout << f;
    // friend binary operator
    //Fraction operator +(Fraction a, Fraction b)

    // friend unary operator
    //Fraction operator -(Fraction a)

    // implement all of these
    double p = a * b;
    p = dot(a,b); // symmetric friend function
    p = a.dot(b); // asymmetric (method, or member function)
    p = Vector3d::dot(a,b);

    double mag = c.mag(); // square root (x*x+y*y+z*z)
    double magsq = c.magsq(); // x*x+y*y+z*z

  cout << Vector3d::getcount() << "\n"; // print how many vectors there are
}
