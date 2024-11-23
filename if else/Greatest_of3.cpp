#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter three numbers : ";
    cin>>x>>y>>z;
    cout<<"The greatest number of the three is : ";
    if (x>y){
        if (x>z) {cout<<x;}
        else cout<<z;
    }
    if (x<y){
        if (y>z) cout<<y;
        else cout<<z;
    }
    cout<<" .";
}