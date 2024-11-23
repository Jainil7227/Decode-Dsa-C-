#include <iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"Enter Principle amount : ";
    cin>>p;
    cout<<"Enter Rate of interest : ";
    cin>>r;
    cout<<"Enter Time Period : ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"The simple interest is : "<<si;
}