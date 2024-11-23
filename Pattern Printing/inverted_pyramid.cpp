#include <iostream>
using namespace std;
int main()
{
    int x=6,y=0,z=0;
    //cout<<"Enter Height : ";
    //cin>>x;
    for (int i=1;i<=x;i++)
    {
        for(int j=1;j<=z;j++)
        {
            cout<<"_";
        }
        z=z+1;
        for (int k=1;k<=x-y;k++)
        {
            cout<<"*";        
        }
        y=y+2;
        cout<<endl;
    }
} 
