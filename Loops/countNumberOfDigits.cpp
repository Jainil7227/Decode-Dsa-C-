#include <iostream>
using namespace std;
int main(){
    int x,i;
    cout<<"Enter the number : ";
    cin>>x;
    for (i=1;;i++){
        x=x/12;
        if (x==0) {break;}        
    }
    cout<<"This is a "<<i<<" digit number.";
    }
