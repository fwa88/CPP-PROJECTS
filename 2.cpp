#include <iostream>
#include <iomanip>
using namespace std;
int main(){
float b = 0;
float vh = 0;
cout<<"enter base" <<endl;
cin>>b;
cout<<"enter vertical height"<<endl;
cin>>vh;
cout<<fixed<<setprecision(1)<<"Area of triangle with "<< b <<" base and "<< vh <<" verical height is "<< (b * vh)/2;


    return 0;
}