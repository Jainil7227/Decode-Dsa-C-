#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if (x%5==0 or x%3==0){
        if (x%15!=0) cout<<"Yes";
        else cout<<"No";
    }
}