#include <iostream>
#include<cmath>
using namespace std;

class Complex{
private:
    double rea, ima;
public:
    Complex(double r=0,double i=0):rea(r),ima(i){}
    friend Complex operator +(Complex a, Complex b){
        Complex plu(a.rea+b.rea, a.ima+b.ima);
        return plu;
    }
    friend Complex operator *(Complex a, Complex b){
        Complex mul(a.rea*b.rea-a.ima*b.ima, a.rea*b.ima+a.ima*b.rea);
        return mul;
    }
    friend Complex operator -(Complex a){
        Complex minu(-a.rea, -a.ima);
        return minu;
    }
    double abs(){
        double m;
        m=sqrt(rea*rea-ima*ima);
        return m;
    }
    friend ostream& operator <<(ostream& s, Complex f){
        return s<<'('<<f.rea<<','<<f.ima<<')'<<'\n';
    }
};
int main() {
	const Complex c1; // (0,0)  (0 + 0i)
	const Complex c2(2.5); // 2.5 + 0i
	const Complex c3(2.5, 1.8); //2.5 + 1.8i
  Complex c4 = c2 + c3; // 5.0 + 1.8i
	Complex c5 = c2 * c3; // https://en.wikipedia.org/wiki/Complex_number
	Complex c6 = -c5;
    c6.abs(); // magnitude of c6    sqrt of real^2 - imag^2

	cout << c3 << '\n'; // (2.5,1.8)
	cout << c4 << '\n';
	cout << c5 << '\n';
	cout << c6 << '\n';
    cout << c6.abs() << '\n';
}

