/*
This also works:
#include <iostream>
using namespace std;
int main(){
    int num = 0;
    int b = 5;
cout<<"enter a number between (1-10)"<<endl;
cin>>num;
 int num1 = num * b;
 int num2 = num1 * b;
 int num3 = num2 * b;
 int num4 = num3 * b;
 int num5 = num4 * b;

cout<<" "<<num<<" "<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<endl;


return 0;
}
*/

#include <iostream>
using namespace std;
int main(){
cout<<"enter a number between (1-10)"<<endl;
int num = 0;
cin>>num;
cout<<num<<"\t";
num*=5;
cout<<num<<"\t";
num*=5;
cout<<num<<"\t";
num*=5;
cout<<num<<"\t";
num*=5;
cout<<num<<"\t";
num*=5;
cout<<num<<"\t";

    return 0;
}