#include <iostream>
using namespace std;
int main(){
cout<<"Minutes to Hours Converter"<<endl;
cout<<"======================================="<<endl;
cout<<"                                           "<<endl;
int m = 0;
int h = 0;
cout<<"enter Minutes:"<<endl;
cin>>m;
h = m/60;
int m2 = m %60;
// I also can use the mathmatical formula r = a-b*|a/b| by doing this :
// int c = a/b;
// int m2 = m - 60 * c;
// which will give the same result.
cout<< m <<" minutes is equal to "<< h <<" hours and "<< m2 <<" minutes"<<endl;

    return 0;
}