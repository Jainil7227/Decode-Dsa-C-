#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter size : ";
    cin>>x;
    if(x%2!=0)
{
    for (int i=1;i<=x;i++){
        for (int j=1;j<=x;j++){
            if (j==((x+1)/2) || i==((x+1)/2)) {cout<<"*";}
            else cout<<"_";
        } cout<<endl;
    }
}
} 