#include <iostream>
using namespace std;
int main (){
    int x,y,z;
    cout<<"Enter a number : ";
    cin>>x;
    y=0;
    for (int i=1;;i++){
        z=x%10;
        x=x/10;
        y=y*10;
        y=y+z;
        if (x==0) {break;}
    }
    cout<<"The reverse of the number is "<<y<<".";
}