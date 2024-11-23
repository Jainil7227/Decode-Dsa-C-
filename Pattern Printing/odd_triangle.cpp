#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter hieght : ";
    cin>>x;
    for (int i=1;i<=x;i++){
        for (int j=1;j<=(2*i)-1;j++){
            if(j%2!=0) cout<<j<<" ";
        }
        cout<<endl;
    }
}