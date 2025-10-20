#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // the mathmatical formula for Circumference of circle is C = π * d
    // the mathmatical formula for Perimeter of semi-circle is P = C/2 + d 
    int d = 0;
    const float π = 3.14159;
 cout<<"enter diameter:"<<endl;
 cin>>d;
 float c = π * d;
 float p = c/2 + d;
 cout<<fixed<<setprecision(1)<<"Circumference of circle = "<< c <<" ,Perimeter of semi-circle = "<< p <<endl;

    return 0;
}