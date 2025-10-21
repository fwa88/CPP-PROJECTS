#include <iostream>
using namespace std;
int main(){
int minutes_consumed = 0;
cout<<"enter how many minutes have you consumed this month:"<<endl;
cin>>minutes_consumed;
const float m1 = 0.05;
const float line_rental = 19.90;
float call_charage = (minutes_consumed * m1);
double tax = (call_charage + line_rental) * (6/100);  // Using 6.0 for floating-point division
double total = (line_rental + call_charage + tax);

cout<<"                      $$$$MOBILE PHONE BILLER$$$$  "<<endl;
cout<<"                            ____________"<<endl;
cout<<"                          /             \\  "<<endl;
cout<<"                         |  ___________  |"<<endl;
cout<<"                         | | YOUR TOTAL| |"<<endl;
cout<<"                         | |  BILL IS: | |"<<endl;
cout<<"                         | |           | |"<<endl;
cout<<"                         | |   "<<total<<   "RM  | |"<<endl;
cout<<"                         | |           | |"<<endl;
cout<<"                         | |___________| |"<<endl;
cout<<"                         |       O       |"<<endl;
cout<<"                          \\_____________/"<<endl;


    return 0;
}

