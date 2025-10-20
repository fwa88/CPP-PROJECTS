#include <iostream>
using namespace std;
int main(){
    string name,month;
cout<<"What is your name?"<<endl;
getline(cin, name);
cout<<"Which month? "<<endl;
getline(cin, month);
    // Here I had used regular cin>>name; and same thing with month but
    // the problem is that when I write my full name or for example write Septemper 3rd
    // it doesnt work properly, so I used getline which allow me to write long sentences.
 int salary = 0;
 cout<<"enter your salary: ";
 cin>>salary;
 double employee_EPF = salary * (11.0/100);
 salary -= employee_EPF;                                 // you can see here I used x.x  
 double company_EPF = salary * (13.0/100);               // because with out it c++ consider it as an integer, and the result will be 0
cout<<"                   Fares Company Sdn. Bhd."<<endl;
cout<<"========================================================================="<<endl;
cout<<"                   ======General information======"<<endl;
cout<<"Name / "<<name;
cout<<"                      Month / "<<month<<endl;
cout<<"========================================================================="<<endl;
cout<<"              ======Salary deduct and EPF details======"<<endl;

 cout<<"Gross salary is = "<< salary <<endl;
 cout<<"employee detuction amount is = "<< employee_EPF <<endl;
 cout<<"company detuction amount is = "<< company_EPF <<endl;
 cout<<"net pay and total EPF saving = "<< employee_EPF + company_EPF <<endl;
 cout<<"========================================================================="<<endl;
    return 0;
}
