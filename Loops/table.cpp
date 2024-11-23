#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Table of : ";
    cin>>x;
    cout<<"Till no. ";
    cin>>y;
    cout<<"The Table of "<<x<<" is : \n";
    for (z=1;z<=y;z++){
        cout<<x<<" * "<<z<<" = "<<x*z<<endl;
    }
}