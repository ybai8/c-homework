#include <iostream>
using namespace std;
class Vector3d{
private:
    double x,y,z;
public:
    Vector3d(double x=0,double y=0,double z=0):x(x),y(y),z(z){}
        friend
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}

