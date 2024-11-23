#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the Lenght : ";
    cin>>x;
    cout<<"Enter the breadth : ";
    cin>>y;
    for (int i=1;i<=y;i++){
        for (int j=1;j<=x;j++){
            cout<<j;
        }
        cout<<endl;
    }
}