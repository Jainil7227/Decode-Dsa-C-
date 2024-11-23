#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Input x : ";
    cin>>x;
    cout<<"Input y : ";
    cin>>y;
    z=x/y;
    cout<<"The remainder is : "<<x-(y*z)<<".";
// We can also use % (modulous operator) for remainder.
}