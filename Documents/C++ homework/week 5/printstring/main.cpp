#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "hello";
    char b;
    int n,i=0;
    cin >> n;
    char s[100];
for(i=0;n>0;i++){
       s[i]=n%10+'0';
       n=n/10;
       }
for(int q=0;q<=i/2;q++){
   b=s[q];
   s[q]=s[i-q];
   s[i-q]=b;

}
s[i+1]='\n';
string m=s;
cout<<m;
  }



