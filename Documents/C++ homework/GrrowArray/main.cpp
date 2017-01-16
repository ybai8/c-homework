

#include <iostream>
using namespace std;

class GrowArray{
private:
    int* data;
    int size;
public:
    GrowArray():data(nullptr),size(0){}
     GrowArray(int size):data(new int[size]),size(size){}


    void add(int value){
        /*this->size++;
        int *p=data;
        data=new int [size];
        for(int i=0;i<size-1;++i)
        {data[i]=p[i];
        }
        //delete []p;
        data[size-1]=value;*/
        int *p=new int[size];
        for(int i=0;i<size;i++){
            p[i]=data[i];
        }
        size++;
        data=new int[size];
        for(int i=0;i<size-1;i++){
            data[i]=p[i];
        }
        data[size-1]=value;
delete [] p;


    }



    GrowArray(const GrowArray& orig):size(orig.size),data(new int[orig.size]){
        for(int i=0;i<size;++i)
            data[i]=orig.data[i];
        //memcpy(data,orig.data,size);

    }
    ~GrowArray(){
        delete [] data;

    }
    void operator=(const GrowArray& orig){

        if(this!=&orig){
            delete [] data;
            size=orig.size;
            data=new int[size];
            for(int i=0;i<size;++i)
                data[i]=orig.data[i];
        }


    }
    GrowArray(GrowArray&& orig):data(orig.data),size(orig.size){
        orig.data=nullptr;

    }
    friend ostream& operator<<(ostream& s,const GrowArray& g){
        for(int i=0;i<g.size;++i)
            s<<g.data[i];

        return s;
    }


};

    GrowArray f(GrowArray x) {
      x.add(1);
      return x;
    }

    int main() {
        GrowArray a;
          for (int i = 0; i < 10; i++)
            a.add(i);
          cout<<a<<'\n';
          GrowArray b = a;
          cout << b << '\n';
          GrowArray c;
          c = a;
          cout << c<< '\n';
          c = f(b);
          cout<<c<<'\n';

}
