#include <iostream>
using namespace std;
int main(){
    int x,y;
    char a;
    cout<<"Enter length : ";
    cin>>x;
    cout<<"Enter breadth : ";
    cin>>y;
    for (int i=1;i<=y;i++){
        for (int j=65;j<=(x+64);j++){
            char a = (char) (j);
            cout<<a;
        }
        cout<<endl;
    }
    
}