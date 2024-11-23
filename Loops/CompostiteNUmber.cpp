#include <iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    for (int i=2;i<=x-1;i++){
        if (x%i==0) 
        {
            cout<<"This is a composite number.";
            break;
        }
        else {
            cout<<"This is a prime number.";
            break;
            }
    }
}