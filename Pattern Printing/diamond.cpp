#include <iostream>
using namespace std;
int main()
{
    int m,nst=1,nsp;
    cout<<"Enter the dimension : ";
    cin>>m;
    nsp=m-1;
    for (int i=1; i<=(2*m)-1;i++)
    {
        for (int j=1;j<=nsp;j++)
        {
            cout<<" ";
        }
        if (i<m){nsp--;}
        else {nsp++;}
        for (int k=1;k<=nst;k++)
        {
            cout<<"*";
        }
        if(i<m){nst+=2;}
        else {nst-=2;}
        cout<<endl;
    }
}