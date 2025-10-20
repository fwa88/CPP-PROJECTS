#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float num1 = 0;
float num2 = 0;
cout<<"enter two numbers: "<<endl;
cin>>num1>>num2;
cout<<"operations"<<"\t";
cout<<"                         results"<<endl;
cout<<"--------------------------------------------------------------"<<endl;
cout<<fixed<<setprecision(1)<<"Addition                               "<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
cout<<fixed<<setprecision(1)<<"Subtraction                            "<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
cout<<fixed<<setprecision(1)<<"Multiplication                         "<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
cout<<fixed<<setprecision(1)<<"Division                               "<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;
cout<<"--------------------------------------------------------------"<<endl;
  return 0;
}
    