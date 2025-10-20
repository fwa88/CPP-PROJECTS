#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    float Celsius_Degree = 0;
    float Fahrenheit_Degree = 0;
cout<<"enter degree in celsius "<<endl;
cin>>Celsius_Degree;
Fahrenheit_Degree = (Celsius_Degree * 1.8)+32;
cout<<fixed<<setprecision(1)<<Celsius_Degree<<" degree celsius is equal to "<<Fahrenheit_Degree<<" degree farhenheit"<<endl;

return 0;
}