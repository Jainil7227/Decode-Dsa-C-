#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int x =(char)ch;
    cout<<"The given character ";
    if ((x>=65 and x<=90) or (x>=97 and x<=122)) {cout<<"is an alphabet.";}
    else {cout<<"is not an alphabet.";}
}