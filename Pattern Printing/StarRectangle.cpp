#include <Iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"Length of rectangle : ";
    cin>>m;
    cout<<"Breadth of rectangle : ";
    cin>>n;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}