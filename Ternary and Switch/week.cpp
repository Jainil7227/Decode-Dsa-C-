#include <iostream>
using namespace std;
int main (){
    int x;
    cout<<"Please enter day number : ";
    cin>>x;
    cout<<"The day is ";
    switch(x){
        case 1: cout<<"Monday"; break;
        case 2: cout<<"Tuesday"; break;
        case 3: cout<<"Wednesday"; break;
        case 4: cout<<"Thrusday"; break;
        case 5: cout<<"Friday"; break;
        case 6: cout<<"Saturday"; break;
        case 7: cout<<"Sunday"; break;
    }cout<<".";
}